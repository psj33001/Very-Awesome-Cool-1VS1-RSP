using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Manager : MonoBehaviour
{
    Player player1;
    Player player2;
    public GameObject tmp_title;
    public GameObject tmp_space;
    public GameObject ingameText_obj;
    public GameObject crown_obj;
    public GameObject lighting_obj;

    public AudioSource backAudio;
    public AudioSource effectAudio;
    TextMeshProUGUI ingameText;
    Material ingameText_mat;

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
    public int totalWinner;
    float readyTime;
    float handsetTime;
    float gameTime;
    public float countDelay;

    void Awake()
    {
        Screen.SetResolution(1920, 1080, true);
        ingameText = ingameText_obj.GetComponent<TextMeshProUGUI>();
        ingameText_mat = ingameText.fontMaterial;

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

    void Update()
    {
        //if(Input.GetKeyDown(KeyCode.Escape)) {backAudio.time = 17.2f;} //for testing
        timer += Time.deltaTime;

        if(Input.GetKeyUp(KeyCode.Space) && gameStarted == false)
        {
            timer = 0.0f;
            gameStarted = true;
            gameState = "getStarted";

            player1.inputRSP = 2;
            player2.inputRSP = 2;
            p1winningTime = 0.0;
            p2winningTime = 0.0;
            currentWinner = 0;
            totalWinner = 0;
            gameMusicNum = Random.Range(0, gameMusic.Length);
            gameMusicNum = 0; //for testing
            gameTime = Random.Range(3.0f, 10.0f);
            countDelay = Random.Range(0.2f, 1.0f);
            //countDelay = 0.3f; //for testing
            if(gameMusicNum == 0) {readyTime = 8.5f;}
            else {readyTime = Random.Range(countDelay*2+1.0f, 6.0f);}
            handsetTime = Random.Range(1.0f, readyTime-countDelay*2-1.0f);
            //handsetTime = 1.0f; //for testing
        }

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
                        backAudio.clip = gameMusic[gameMusicNum];
                        if(gameMusicNum == 0) {backAudio.time = 11.8f;}
                        backAudio.Play();
                        ingameText.text = "Get Ready...";

                        player1.face_pos = new Vector3(-12, 0, 0);
                        player1.hand_pos = new Vector3(-7, 0, 0);
                        player2.face_pos = new Vector3(12, 0, 0);
                        player2.hand_pos = new Vector3(7, 0, 0);
                        player1.SetGameFace();
                        player2.SetGameFace();
                    }
                    break;

                case "getReady":
                    if(ingameText_mat.GetFloat(ShaderUtilities.ID_FaceDilate) >= 0.2f) {ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, 0.2f);}
                    else {ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, timer*0.8f - 1);}
                    player1.AllowInput();
                    player2.AllowInput(); // prevent input before ready
                    
                    if(timer >= readyTime) {
                        gameState = "game!!!";
                        timer = 0.0f;
                        RSP = "paper";
                        ingameText.text = "Fight!!!";
                        player1.RSPshake();
                        player2.RSPshake();
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
                                p1winningTime += 1;
                            }
                            else if(player2.inputRSP == 2) {
                                currentWinner = 2;
                                p2winningTime += 1;
                            }
                            break;
                        case 1:
                            if(player2.inputRSP == 0) {
                                currentWinner = 2;
                                p2winningTime += 1;
                            }
                            else if(player2.inputRSP == 1) {
                                currentWinner = 0;
                            }
                            else if(player2.inputRSP == 2) {
                                currentWinner = 1;
                                p1winningTime += 1;
                            }
                            break;
                        case 2:
                            if(player2.inputRSP == 0) {
                                currentWinner = 1;
                                p1winningTime += 1;
                            }
                            else if(player2.inputRSP == 1) {
                                currentWinner = 2;
                                p2winningTime += 1;
                            }
                            else if(player2.inputRSP == 2) {
                                currentWinner = 0;
                            }
                            break;
                    }
                    if(p1winningTime > p2winningTime) {totalWinner = 1;}
                    else if(p1winningTime < p2winningTime) {totalWinner = 2;}
                    else {totalWinner = 0;}

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

                        ingameText_mat.SetFloat(ShaderUtilities.ID_FaceDilate, -1f);
                        ingameText_obj.transform.localScale = new Vector2(1, 1);
                        player1.face_pos = new Vector3(-14, 0, 0);
                        player1.hand_pos = new Vector3(-9, 0, 0);
                        player2.face_pos = new Vector3(14, 0, 0);
                        player2.hand_pos = new Vector3(9, 0, 0);
                        player1.hand_rot = Quaternion.Euler(0, 0, 0);
                        player2.hand_rot = Quaternion.Euler(0, 0, 0);
                        
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
