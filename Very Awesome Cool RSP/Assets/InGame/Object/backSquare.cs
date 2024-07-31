using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class backSquare : MonoBehaviour
{
    Material mat;

    float timer;
    public int direction; // 1: right, 2: left
    float scale;
    float speed = 0;
    float maxSpeed;
    float acceleration;
    float lifeTime;
    

    void Start()
    {
        mat = GetComponent<Renderer>().material;

        timer = 0;
        maxSpeed = 2f;
        acceleration = 0.01f;
        lifeTime = Random.Range(2f, 3f);
        scale = Random.Range(1f, 5f);
        transform.localScale = new Vector2(scale, scale);
        transform.position = new Vector2(-1*direction*Random.Range(12, 22), Random.Range(-8, 8));
        transform.rotation = Quaternion.Euler(0, 0, Random.Range(0, 360));
    }

    void Update()
    {
        timer += Time.deltaTime;
        if (timer >= lifeTime)
        {
            Destroy(gameObject);
        }
        
        if (speed >= maxSpeed) {
            speed = maxSpeed;
        }
        else {
            speed += acceleration*Time.deltaTime;
        }
        transform.position = new Vector2(transform.position.x + direction*speed, transform.position.y);
        transform.rotation = Quaternion.Euler(0, 0, transform.rotation.eulerAngles.z + speed*-10);
    }
}
