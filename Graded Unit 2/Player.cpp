#include "Player.h"
#include"SpriteObject.h"
#include"AssetManager.h"

Player::Player()
	: SpriteObject()
	, twoFramOldPos(100, 300)
	, velocity()
	, acceleration()
{
	sprite.setTexture(AssetManager::RequestTexture("Assets/Graphics/PlayerStand.png"));

	collisionoffset = sf::Vector2f(0, 30);
	collisionscale = sf::Vector2f(0.5f, 0.5f);
}

void Player::Update(sf::Time frameTime)
{
	const float DRAG_MULT = 10.0f;

	SetPosition(GetPosition() + velocity * frameTime.asSeconds());
	velocity = velocity + acceleration * frameTime.asSeconds();

	//TODO drag
	velocity = velocity - velocity * DRAG_MULT * frameTime.asSeconds();
	//TODO update acceleration

	UpdateAcceleration();
}

void Player::HandelCollision(SpriteObject& other)
{
}

void Player::UpdateAcceleration()
{
	const float ACCEL = 1000;
	

	acceleration.x = 0;
	

	//This will move the player in the direction of the key presses using the acceleration const
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		acceleration.x = -ACCEL;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		acceleration.x = ACCEL;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		acceleration.y = -ACCEL;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		acceleration.y = ACCEL;
	}
}
