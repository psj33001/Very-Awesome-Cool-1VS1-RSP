using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceScript : MonoBehaviour
{
    SpriteRenderer spriteRenderer;
    Material mat;
    Player player;

    public Sprite[] sprites_loby;
    public Sprite[] sprites_game;
    public Sprite[] sprites_draw;
    public Sprite[] sprites_win;
    public Sprite[] sprites_lose;
    
    void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        mat = spriteRenderer.material;
        player = GetComponentInParent<Player>();
        if(player.player == 1) {
            spriteRenderer.flipX = false;
            mat.SetColor("_SolidOutline", new Color(0.8f, 0.2f, 0.2f, 1f));
        }
        else {
            spriteRenderer.flipX = true;
            mat.SetColor("_SolidOutline", new Color(0.2f, 0.2f, 0.8f, 1f));
        }
    }

    void FixedUpdate()
    {
        transform.position = Vector3.Lerp(transform.position, player.face_pos, 0.1f);
        //transform.rotation = Quaternion.Lerp(transform.rotation, rot, 0.1f);
        switch(player.face_state) {
            case "loby":
                spriteRenderer.sprite = sprites_loby[player.face_sprite];
                break;
            case "game":
                spriteRenderer.sprite = sprites_game[player.face_sprite];
                break;
            case "draw":
                spriteRenderer.sprite = sprites_draw[player.face_sprite];
                break;
            case "win":
                spriteRenderer.sprite = sprites_win[player.face_sprite];
                break;
            case "lose":
                spriteRenderer.sprite = sprites_lose[player.face_sprite];
                break;
        }
    }
}
