#pragma once
#include "SpriteObject.h"
class Player :
    public SpriteObject
{
public:

    Player();

    void Update(sf::Time frameTime) override;

    void HandelCollision(SpriteObject& other) override;
    void SetHealth(int change);

private:

    void UpdateAcceleration();



    int health = 200;
    sf::Vector2f twoFramOldPos;
    sf::Vector2f velocity;
    sf::Vector2f acceleration;
};

