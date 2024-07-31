using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RSPshake : MonoBehaviour
{
    Manager manager;
    Player player;

    float timer = 0.0f;
    float countDelay;

    void Awake()
    {
        manager = GameObject.FindWithTag("manager").GetComponent<Manager>();
        player = GetComponentInParent<Player>();

        countDelay = manager.countDelay;

        if(player.player == 1) {
            player.hand_pos -= new Vector3(-2, 3);
            player.hand_rot = Quaternion.Euler(0, 0, -60);
        }
        if(player.player == 2) {
            player.hand_pos -= new Vector3(2, 3);
            player.hand_rot = Quaternion.Euler(0, 0, 60);
        }
    }

    void Update()
    {
        timer += Time.deltaTime;
        if(timer >= countDelay/5*3) {
            if(manager.RSP != "paper") {
                player.hand_rot = Quaternion.Euler(0, 0, 0);
                if(player.player == 1) {player.hand_pos += new Vector3(-2, 3);}
                if(player.player == 2) {player.hand_pos += new Vector3(2, 3);}
            }

            Destroy(this);
        }
    }
}
