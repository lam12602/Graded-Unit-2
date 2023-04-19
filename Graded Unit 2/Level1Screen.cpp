#include "Level1Screen.h"
#include "AssetManager.h"
#include "Game.h"

Level1Screen::Level1Screen(Game* newGamepointer)
	:Screen(newGamepointer)
	, player()
	,gameRunning(true)
{
}

void Level1Screen::Update(sf::Time frameTime)
{
	if (gameRunning)
	{



		player.Update(frameTime);
		player.SetColliding(false);
	}
}

void Level1Screen::Draw(sf::RenderTarget& target)
{
	player.Draw(target);
}
