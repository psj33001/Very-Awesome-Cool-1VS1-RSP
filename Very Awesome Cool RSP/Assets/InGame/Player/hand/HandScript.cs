using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandScript : MonoBehaviour
{
    SpriteRenderer spriteRenderer;
    Material mat;
    Player player;

    public Sprite[] sprites;
    
    void Awake()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        mat = spriteRenderer.material;
        player = GetComponentInParent<Player>();
        if(player.player == 1) {
            spriteRenderer.flipX = true;
            mat.SetColor("_SolidOutline", new Color(0.8f, 0.2f, 0.2f, 1f));
        }
        else {
            spriteRenderer.flipX = false;
            mat.SetColor("_SolidOutline", new Color(0.2f, 0.2f, 0.8f, 1f));
        }
    }

    void Update()
    {
        transform.position = Vector3.Lerp(transform.position, player.hand_pos, 6f*Time.deltaTime);
        transform.rotation = Quaternion.Lerp(transform.rotation, player.hand_rot, 6f*Time.deltaTime);
        spriteRenderer.sprite = sprites[player.hand_sprite];
    }
}
