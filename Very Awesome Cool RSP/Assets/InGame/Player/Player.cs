using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public GameObject face_prefab;
    public GameObject hand_prefab;
    GameObject face_obj;
    GameObject hand_obj;

    Manager manager;
    FaceScript faceScript;
    HandScript handScript;
    public int face_sprite;
    public string face_state = "loby";
    public int hand_sprite;
    public int inputRSP = 2; // 0: rock, 1: scissor, 2: paper

    public Vector3 face_pos;
    //public quaternion face_rot;
    public Vector3 hand_pos;
    public Quaternion hand_rot;

    public int player;

    void Awake()
    {
        face_obj = Instantiate(face_prefab, transform);
        hand_obj = Instantiate(hand_prefab, transform);

        manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
        faceScript = GetComponentInChildren<FaceScript>();
        handScript = GetComponentInChildren<HandScript>();
        
        SetLobbyFace();
    }

    public void DirectMove() {
        hand_obj.transform.position = hand_pos;
        hand_obj.transform.rotation = hand_rot;
        face_obj.transform.position = face_pos;
    }

    public Vector3 GetFacePos() {
        return face_obj.transform.position;
    }

    public void RSPshake() {
        hand_obj.AddComponent<RSPshake>();
    }

    public void SetLobbyFace() {
        face_sprite = Random.Range(0, faceScript.sprites_loby.Length);
        face_state = "loby";
    }
    public void SetGameFace() {
        face_sprite = Random.Range(1, faceScript.sprites_game.Length);
        face_state = "game";
    }
    public void SetHandsetFace() {
        face_sprite = 0;
        face_state = "game";
        hand_pos += new Vector3(0, 3);
        hand_rot = Quaternion.Euler(0, 0, 0);
    }
    public void SetDrawFace() {
        face_sprite = Random.Range(0, faceScript.sprites_draw.Length);
        face_state = "draw";
    }
    public void SetWinFace() {
        face_sprite = Random.Range(0, faceScript.sprites_win.Length);
        face_state = "win";
    }
    public void SetLoseFace() {
        face_sprite = Random.Range(0, faceScript.sprites_lose.Length);
        face_state = "lose";
    }

    public void AllowInput() {
        if(player == 1) {
            if(Input.GetKeyDown(KeyCode.Q)) {inputRSP = 0;}
            if(Input.GetKeyDown(KeyCode.W)) {inputRSP = 1;}
            if(Input.GetKeyDown(KeyCode.E)) {inputRSP = 2;}
        }
        if(player == 2) {
            if(Input.GetKeyDown(KeyCode.I)) {inputRSP = 0;}
            if(Input.GetKeyDown(KeyCode.O)) {inputRSP = 1;}
            if(Input.GetKeyDown(KeyCode.P)) {inputRSP = 2;}
        }
        if(manager.gameState == "game!!!") {hand_sprite = inputRSP;}
    }

    void Update()
    {
        
    }
}
