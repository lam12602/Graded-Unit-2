#pragma once
#include "Level1Screen.h"
#include "AssetManager.h"
#include "Game.h"
#include <fstream>
#include <iostream>


Level1Screen::Level1Screen(Game* newGamepointer)
	:Screen(newGamepointer)
	, player()
	, enemy()
	, gameRunning(true)
{
}

void Level1Screen::Update(sf::Time frameTime)
{
	if (gameRunning)
	{



		player.Update(frameTime);
		player.SetColliding(false);
		enemy.SetColliding(false);

		if (player.CheckCollision(enemy))
		{
			player.SetColliding(true);
			enemy.SetColliding(true);
			enemy.HandelCollision(player);
		}
	}
}

void Level1Screen::Draw(sf::RenderTarget& target)
{
	player.Draw(target);
	enemy.Draw(target);
}
