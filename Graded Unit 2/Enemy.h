#pragma once
#include "SpriteObject.h"
#include "Player.h"
class Enemy :
    public SpriteObject
{
public:
    Enemy(sf::Vector2f newPos);

    void Update(sf::Time frameTime) override;

    void HandelCollision(SpriteObject& other) override;

protected:
    Player player;
    sf::Vector2f Position;
    float velocity;
};

