using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class lighting : MonoBehaviour
{
    Manager manager;
    Player player1;
    Player player2;

    float timer;
    
    void Start()
    {
        manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
        player1 = GameObject.FindWithTag("player1").GetComponent<Player>();
        player2 = GameObject.FindWithTag("player2").GetComponent<Player>();
    }
    
    void Update()
    {
        timer += Time.deltaTime;
        transform.localScale = new Vector2(0.65f + 0.05f*Mathf.Cos(timer*1.0f), 5.0f);
        if(manager.totalWinner == 1) {transform.position = player1.GetFacePos() + new Vector3(0, 14f, 0);}
        else if(manager.totalWinner == 2) {transform.position = player2.GetFacePos() + new Vector3(0, 14f, 0);}
        else {gameObject.SetActive(false);}

        if(manager.gameState == "getStarted") {gameObject.SetActive(false);}
    }
}
