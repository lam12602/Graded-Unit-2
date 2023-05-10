#pragma once
#include "Screen.h"
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Enemy.h"
#include "Timer.h"
class Level1Screen :
    public Screen
{
public:
    Level1Screen(Game* newGamepointer);
    void Update(sf::Time frameTime) override;
    void Draw(sf::RenderTarget& target) override;

private:

    Player player;

    Enemy enemy;

    Timer timer;

    bool gameRunning;

};

