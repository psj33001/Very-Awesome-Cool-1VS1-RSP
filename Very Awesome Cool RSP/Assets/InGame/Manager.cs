using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Manager : MonoBehaviour
{
    Player player1;
    Player player2;
    EffectManager effectManager;
    public GameObject tmp_title;
    public GameObject tmp_space;
    public GameObject ingameText_obj;
    public GameObject crown_obj;
    public GameObject lighting_obj;
    public GameObject fire_obj;
    public GameObject bar_obj;
    public GameObject bar_frame_obj;

    public GameObject touch_toggle;
    public GameObject[] touch_button;
    public GameObject guide;

    public AudioSource backAudio;
    public AudioSource effectAudio;
    TextMeshProUGUI ingameText;
    Material ingameText_mat;

    public bool touchMod = false;
    public bool help = false;
    public bool gameStarted = false;
    public string gameState = "notStarted";
    public string RSP = "none";
    public float timer = 0f;

    public AudioClip[] lobyMusic;
    public AudioClip[] gameMusic;
    public AudioClip[] soundEffects;
    float audioVolumeDefault = 0.3f;

    int gameMusicNum;
    int lobyMusicNum;

    public double p1winningTime;
    public double p2winningTime;
    public int currentWinner;
    int currentWinner_last;
    public int totalWinner;
    float readyTime;
    float handsetTime;
    public float gameTime;
    public float countDelay;

    void Awake()
    {
        Screen.SetResolution(1920, 1080, false);
        ingameText = ingameText_obj.GetComponent<TextMeshProUGUI>();
        ingameText_mat = ingameText.fontMaterial;
        effectManager = GameObject.FindWithTag("effectManager").GetComponent<EffectManager>();

        GameObject.FindWithTag("bar").SetActive(false);
        GameObject.FindWithTag("bar_frame").SetActive(false);

        for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
        touch_toggle.SetActive(true);

        player1 = GameObject.FindWithTag("player1").GetComponent<Player>();
        player2 = GameObject.FindWithTag("player2").GetComponent<Player>();
        player1.player = 1;
        player1.face_pos = new Vector3(-14, 0, 0);
        player1.hand_pos = new Vector3(-9, 0, 0);
        player2.player = 2;
        player2.face_pos = new Vector3(14, 0, 0);
        player2.hand_pos = new Vector3(9, 0, 0);

        lobyMusicNum = Random.Range(0, lobyMusic.Length);
        //lobyMusicNum = 2; //for testing
        backAudio.clip = lobyMusic[lobyMusicNum];
        backAudio.Play();
    }

    public void GameStart()
    {
        timer = 0.0f;
        gameStarted = true;
        gameState = "getStarted";

        player1.inputRSP = 2;
        player2.inputRSP = 2;
        p1winningTime = 0.0;
        p2winningTime = 0.0;
        currentWinner = 0;
        currentWinner_last = 0;
        totalWinner = 0;
        gameMusicNum = Random.Range(0, gameMusic.Length);
        //gameMusicNum = 2; //for testing
        gameTime = Random.Range(3.0f, 10.0f);
        countDelay = Random.Range(0.2f, 1.0f);
        //countDelay = 0.3f; //for testing
        if(gameMusicNum == 0) {readyTime = 8.5f;}
        else if(gameMusicNum == 1) {readyTime = 6.7f;}
        else if(gameMusicNum == 2) {readyTime = Random.Range(countDelay*2+3.0f, 8.0f);}
        else {readyTime = Random.Range(countDelay*2+3.0f, 8.0f);}
        handsetTime = Random.Range(1.0f, readyTime-countDelay*2-1.0f);
        //handsetTime = 1.0f; //for testing
    }

    void Update()
    {
        //if(Input.GetKeyDown(KeyCode.Escape)) {backAudio.time = 17.2f;} //for testing
        timer += Time.deltaTime;

        if(gameStarted == true)
        {
            switch(gameState)
            {
                case "getStarted":
                    if(backAudio.volume > 0) {backAudio.volume = audioVolumeDefault - timer*audioVolumeDefault/1.5f;}
                    else {backAudio.volume = 0;}

                    if(timer >= 2f) {
                        timer = 0.0f;
                        gameState = "getReady";
                        backAudio.Stop();
                        backAudio.volume = audioVolumeDefault;
                        if(gameMusicNum == 0) {
                            backAudio.clip = gameMusic[0];
                            backAudio.time = 11.8f;
                        }
                        else if(gameMusicNum == 1) {

                            backAudio.clip = gameMusic[1];
                            backAudio.time = 0.0f;
                        }
                        else if(gameMusicNum == 2) {
                            backAudio.volume = 0;
                            backAudio.clip = gameMusic[2];
                            backAudio.time = 64.95f - readyTime;
                        }
                        else {
                            backAudio.clip = soundEffects[2];
                            backAudio.time = 0.0f;
                        }
                        backAudio.Play();
                        ingameText.text = "Get Ready...";

                        if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(true);}

                        player1.face_pos = new Vector3(-10, 0, 0);
                        player1.hand_pos = new Vector3(-5, 0, 0);
                        player2.face_pos = new Vector3(10, 0, 0);
                        player2.hand_pos = new Vector3(5, 0, 0);
                        player1.SetGameFace();
                        player2.SetGameFace();
                    }
                    break;

                case "getReady":
                    if(ingameText_mat.GetFloat(ShaderUtilities.ID_FaceDilate) >= 0.2f) {ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, 0.2f);}
                    else {ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, timer*0.8f - 1);}
                    player1.AllowInput();
                    player2.AllowInput(); // prevent input before ready
                    
                    effectManager.effect2_switch = true;

                    if(gameMusicNum == 2) {
                        if(backAudio.volume < audioVolumeDefault) {backAudio.volume = audioVolumeDefault*timer/(readyTime-1f);}
                        else {backAudio.volume = audioVolumeDefault;}
                    }
                    
                    if(timer >= readyTime) {
                        gameState = "game!!!";
                        timer = 0.0f;
                        RSP = "paper";
                        ingameText.text = "Fight!!!";
                        player1.RSPshake();
                        player2.RSPshake();
                        fire_obj.SetActive(true);
                        bar_obj.SetActive(true);
                        bar_frame_obj.SetActive(true);

                        if(gameMusicNum != 0 && gameMusicNum != 1 && gameMusicNum != 2) {
                            backAudio.Stop();
                            backAudio.clip = gameMusic[gameMusicNum];
                            if(gameMusicNum == 3) {backAudio.time = 25.05f;}
                            else if(gameMusicNum == 4) {backAudio.time = 3.4f;}
                            else if(gameMusicNum == 5) {backAudio.time = 71.6f;}
                            else if(gameMusicNum == 6) {backAudio.time = 16.1f;}
                            backAudio.Play();
                        }
                    }
                    else if(timer >= readyTime - countDelay*1 && RSP == "rock") {
                        RSP = "scissors";
                        player1.hand_sprite = 1;
                        player2.hand_sprite = 1;
                        player1.RSPshake();
                        player2.RSPshake();
                    }
                    else if(timer >= readyTime - countDelay*2 && RSP == "handset") {
                        RSP = "rock";
                        player1.hand_sprite = 0;
                        player2.hand_sprite = 0;
                        player1.RSPshake();
                        player2.RSPshake();
                    }
                    else if(timer >= handsetTime && RSP == "none") {
                        RSP = "handset";
                        player1.hand_sprite = 2;
                        player2.hand_sprite = 2;
                        player1.SetHandsetFace();
                        player2.SetHandsetFace();
                    }
                    break;

                case "game!!!":
                    ingameText_obj.transform.localScale = new Vector2(1.85f + 0.15f*Mathf.Cos(timer*58f), 1.85f + 0.15f*Mathf.Sin(timer*58f));
                    player1.AllowInput();
                    player2.AllowInput();

                    switch(player1.inputRSP)
                    {
                        case 0:
                            if(player2.inputRSP == 0) {
                                currentWinner = 0;
                            }
                            else if(player2.inputRSP == 1) {
                                currentWinner = 1;
                                p1winningTime += Time.deltaTime;
                            }
                            else if(player2.inputRSP == 2) {
                                currentWinner = 2;
                                p2winningTime += Time.deltaTime;
                            }
                            break;
                        case 1:
                            if(player2.inputRSP == 0) {
                                currentWinner = 2;
                                p2winningTime += Time.deltaTime;
                            }
                            else if(player2.inputRSP == 1) {
                                currentWinner = 0;
                            }
                            else if(player2.inputRSP == 2) {
                                currentWinner = 1;
                                p1winningTime += Time.deltaTime;
                            }
                            break;
                        case 2:
                            if(player2.inputRSP == 0) {
                                currentWinner = 1;
                                p1winningTime += Time.deltaTime;
                            }
                            else if(player2.inputRSP == 1) {
                                currentWinner = 2;
                                p2winningTime += Time.deltaTime;
                            }
                            else if(player2.inputRSP == 2) {
                                currentWinner = 0;
                            }
                            break;
                    }
                    if(p1winningTime > p2winningTime) {totalWinner = 1;}
                    else if(p1winningTime < p2winningTime) {totalWinner = 2;}
                    else {totalWinner = 0;}

                    if(currentWinner != currentWinner_last) {
                        if(currentWinner == 1) {effectManager.position = player1.hand_pos;}
                        else if(currentWinner == 2) {effectManager.position = player2.hand_pos;}
                        if(currentWinner != 0) {
                            effectManager.Effect1();
                            effectAudio.clip = soundEffects[1];
                            effectAudio.time = 0.0f;
                            effectAudio.Play();
                        }
                        currentWinner_last = currentWinner;
                    }

                    if(timer >= gameTime) {
                        timer = 0.0f;
                        gameState = "getEnded";
                        RSP = "none";
                        backAudio.Stop();
                        lobyMusicNum = Random.Range(0, lobyMusic.Length);
                        if(lobyMusicNum == 0) {backAudio.time = 31.9f;}
                        else if(lobyMusicNum == 2) {backAudio.time = 17.2f;}
                        else if(lobyMusicNum == 4) {backAudio.time = 60.75f;}
                        else if(lobyMusicNum == 6) {backAudio.time = 3.5f;}
                        else {backAudio.time = 0.0f;}
                        backAudio.clip = lobyMusic[lobyMusicNum];
                        backAudio.Play();

                        effectAudio.clip = soundEffects[0];
                        effectAudio.Play();
                        
                        effectManager.effect2_switch = false;
                        effectManager.Effect2_Reset();

                        ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, -1f);
                        ingameText_obj.transform.localScale = new Vector2(1, 1);
                        player1.face_pos = new Vector3(-14, 0, 0);
                        player1.hand_pos = new Vector3(-9, 0, 0);
                        player2.face_pos = new Vector3(14, 0, 0);
                        player2.hand_pos = new Vector3(9, 0, 0);
                        player1.hand_rot = Quaternion.Euler(0, 0, 0);
                        player2.hand_rot = Quaternion.Euler(0, 0, 0);

                        fire_obj.SetActive(false);
                        bar_obj.SetActive(false);
                        bar_frame_obj.SetActive(false);

                        if(touchMod) for(int i = 0; i < touch_button.Length; i++) {touch_button[i].SetActive(false);}
                        
                        if(totalWinner == 0) {
                            player1.SetDrawFace();
                            player2.SetDrawFace();
                        }
                        else if(totalWinner == 1) {
                            player1.SetWinFace();
                            player2.SetLoseFace();
                        }
                        else if(totalWinner == 2) {
                            player1.SetLoseFace();
                            player2.SetWinFace();
                        }

                        crown_obj.SetActive(true);
                        lighting_obj.SetActive(true);
                    }
                    break;

                case "getEnded":
                    if(timer >= 1f) {
                        tmp_title.SetActive(true);
                        tmp_space.SetActive(true);
                        touch_toggle.SetActive(true);
                        guide.SetActive(true);
                        gameState = "notStarted";
                        RSP = "none";
                        gameStarted = false;
                        timer = 0.0f;

                        player1.hand_sprite = 0;
                        player2.hand_sprite = 0;
                    }
                    break;
            }
        }
    }
}
