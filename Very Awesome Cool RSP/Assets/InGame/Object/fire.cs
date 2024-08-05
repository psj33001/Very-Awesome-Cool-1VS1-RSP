using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fire : MonoBehaviour
{
    SpriteRenderer sr;
    public Sprite[] sprites;

    Manager manager;
    Player player1;
    Player player2;
    Material mat;

    float timer;
    
    void Start()
    {
        sr = GetComponent<SpriteRenderer>();
        manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
        player1 = GameObject.FindWithTag("player1").GetComponent<Player>();
        player2 = GameObject.FindWithTag("player2").GetComponent<Player>();
        mat = GetComponent<Renderer>().material;
    }
    
    void Update()
    {
        timer += Time.deltaTime;
        transform.localScale = new Vector2(2f + 0.1f*Mathf.Sin(timer*10f), 2f + 0.1f*Mathf.Cos(timer*10f));
        if(manager.totalWinner == 1) {
            sr.sprite = sprites[0];
            transform.position = player1.GetFacePos() + new Vector3(0,2,0);
            mat.color = new Color(1f, 0.8f + 0.2f*Mathf.Sin(timer*10f), 0.8f + 0.2f*Mathf.Sin(timer*10f), 0.5f*(float)(manager.p1winningTime-manager.p2winningTime)/manager.gameTime);
        }
        else if(manager.totalWinner == 2) {
            sr.sprite = sprites[1];
            transform.position = player2.GetFacePos() + new Vector3(0,2,0);
            mat.color = new Color(0.8f + 0.2f*Mathf.Sin(timer*10f), 1f, 0.8f + 0.2f*Mathf.Sin(timer*10f), Mathf.Sin(0.25f*Mathf.PI)*(float)(manager.p2winningTime-manager.p1winningTime)/manager.gameTime);
        }
        else {transform.position = new Vector3(0, 100, 0);}
    }
}
