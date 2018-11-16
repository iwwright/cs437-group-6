#include "Enemy.h"
#include <macros.h>

Enemy::Enemy(float x, float y, float size) :  Entity(x, y, size)
{
  type = TYPE_ENEMY;
}

Enemy::~Enemy()
{
    //unsubscirbe from events 
}

void Enemy::HandleEvent(Event* event)
{
     ///if eventid = "walk"
        //move
    
}

void Enemy::move(Vector2D &dir, float delta)
{
  float delta_speed = ENEMY_SPEED * delta;
  pos = pos + dir.normal() * delta_speed;
}