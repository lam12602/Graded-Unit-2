#include "Enemy.h"
#include "AssetManager.h"
#include "SpriteObject.h"
#include "Player.h"

Enemy::Enemy(sf::Vector2f newPos)
	:SpriteObject()
	,velocity(10)
	,player()
	,Position()
{
	sprite.setTexture(AssetManager::RequestTexture("Assets/Graphics/PlayerStand.png"));
	sprite.setPosition(Position);
	collisionoffset = sf::Vector2f(0, -57.0f);
	collisionscale = sf::Vector2f(1.0f, 0.25f);
	SetPosition(newPos);
}

void Enemy::Update(sf::Time frameTime)
{
	float targetposy = player.GetPosition().y;
	float targetposx = player.GetPosition().x;

	if (Position.x > targetposx)
	{
		Position.x = Position.x + velocity;

	}
	if (Position.x < targetposx)
	{
		Position.x = Position.x - velocity;

	}
	if (Position.y > targetposy)
	{
		Position.y = Position.y + velocity;

	}
	if (Position.y < targetposy)
	{
		Position.y = Position.y + velocity;

	}

}

void Enemy::HandelCollision(SpriteObject& other)
{
	player.SetHealth(-10);
}
