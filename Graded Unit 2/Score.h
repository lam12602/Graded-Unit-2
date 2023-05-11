#pragma once
#include"SFML/Graphics.hpp"
#include <xkeycheck.h>
class Score
{
public:

	Score(sf::RenderWindow* newWindow);

	void Update(sf::Time frameTime);
	void Draw(sf::RenderTarget& target);

	void setPosition(sf::Vector2f newPosition);

private:
	std::string scoreString;
	sf::Text scoreText;
	sf::Vector2f position;
	sf::RenderWindow* window;
	float totalScore;
};

