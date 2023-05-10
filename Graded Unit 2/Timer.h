#pragma once
#include"SFML/Graphics.hpp"
#include <xkeycheck.h>
class Timer
{

public:
	Timer(sf::RenderWindow* newWindow);

	void Update(sf::Time frameTime);
	void Draw(sf::RenderTarget& target);

	void setPosition(sf::Vector2f newPosition);

private:
	std::string timerString;
	sf::Text timerText;
	sf::Vector2f position;
	sf::RenderWindow* window;
	sf::Clock timerClock;
	float totalTime;
};

