using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectSquare2 : MonoBehaviour
{
    Manager manager;
    Material mat;
    SpriteRenderer sr;
    
    public Sprite[] sprites;
    float timer;
    float scale;
    float speed;
    float acceleration;
    float lifeTime;

    void Start()
    {
        manager = GameObject.Find("Manager").GetComponent<Manager>();
        mat = GetComponent<Renderer>().material;
        sr = GetComponent<SpriteRenderer>();

        speed = Random.Range(-3f, 3f);
        timer = 0;
        acceleration = 0.992f;
        lifeTime = Random.Range(0.7f, 1.2f);
        scale = Random.Range(0.2f, 0.8f);
        transform.localScale = new Vector2(scale, scale);
        transform.rotation = Quaternion.Euler(0, 0, Random.Range(0, 360));

        sr.sprite = sprites[Random.Range(0, sprites.Length)];

        float ran2 = Random.Range(0.6f, 1f);
        mat.color = new Color(ran2, ran2, ran2, 1);
    }

    void Update()
    {
        timer += Time.deltaTime;
        if(speed > 0) {speed *= acceleration;}
        else {speed = 0;}

        if(timer >= lifeTime) {Destroy(gameObject);}

        transform.localScale = new Vector2(scale, scale) * (1 - timer/lifeTime);
        transform.rotation = Quaternion.Euler(transform.eulerAngles + new Vector3(0, 0, speed));
        mat.color = new Color(mat.color.r, mat.color.g, mat.color.b, 1 - timer/lifeTime);
    }
}
