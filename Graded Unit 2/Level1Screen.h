#pragma once
#include "Screen.h"
#include <SFML/Graphics.hpp>
#include "Player.h"
class Level1Screen :
    public Screen
{
public:
    Level1Screen(Game* newGamepointer);
    void Update(sf::Time frameTime) override;
    void Draw(sf::RenderTarget& target) override;

private:

    Player player;

    bool gameRunning;

};

