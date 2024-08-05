using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EffectSquare1 : MonoBehaviour
{
    Manager manager;
    Material mat;
    SpriteRenderer sr;
    
    public Sprite[] sprites;

    float startRadius = 1.7f;
    float timer;
    public int direction;
    float scale;
    float speed;
    float acceleration;
    float lifeTime;

    void Start()
    {
        manager = GameObject.Find("Manager").GetComponent<Manager>();
        mat = GetComponent<Renderer>().material;
        sr = GetComponent<SpriteRenderer>();

        speed = Random.Range(3f, 15f);
        timer = 0;
        acceleration = 0.992f;
        direction = Random.Range(0, 360);
        lifeTime = Random.Range(0.7f, 1.2f);
        scale = Random.Range(0.5f, 1.5f);
        transform.localScale = new Vector2(scale, scale);
        transform.rotation = Quaternion.Euler(0, 0, Random.Range(0, 360));
        transform.position += new Vector3(Mathf.Cos(direction*Mathf.Deg2Rad), Mathf.Sin(direction*Mathf.Deg2Rad), 0) * startRadius;

        sr.sprite = sprites[Random.Range(0, sprites.Length)];

        float ran1 = Random.Range(0.6f, 0.8f);
        float ran2 = Random.Range(0.0f, 0.6f);
        if(manager.currentWinner == 1) {mat.color = new Color(ran1, ran2, ran2, 1);}
        else if(manager.currentWinner == 2) {mat.color = new Color(ran2, ran2, ran1, 1);}
        else {mat.color = new Color(ran2, ran2, ran2, 1);}
    }

    void Update()
    {
        timer += Time.deltaTime;
        if(speed > 0) {speed *= acceleration;}
        else {speed = 0;}

        if(timer >= lifeTime) {Destroy(gameObject);}

        transform.position += new Vector3(Mathf.Cos(direction*Mathf.Deg2Rad), Mathf.Sin(direction*Mathf.Deg2Rad), 0) * speed * Time.deltaTime;
        transform.localScale = new Vector2(scale, scale) * (1 - timer/lifeTime);
        transform.rotation = Quaternion.Euler(transform.eulerAngles + new Vector3(0, 0, speed/5));
        mat.color = new Color(mat.color.r, mat.color.g, mat.color.b, 1 - timer/lifeTime);
    }
}
