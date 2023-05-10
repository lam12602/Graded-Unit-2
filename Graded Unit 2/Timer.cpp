#include "Timer.h"
#include "AssetManager.h"

Timer::Timer(sf::RenderWindow* newWindow)
	:timerString()
	,timerText()
	,position()
	,window(newWindow)
	,timerClock()
	,totalTime()
{
	timerText.setFont(AssetManager::RequestFont("Assets/Fonts/mainFont.ttf"));
	timerText.setCharacterSize(70);
	timerText.setString("Time: ");
	timerText.setFillColor(sf::Color::Black);
	
}

void Timer::Update(sf::Time frameTime)
{
	timerString = "Timer: ";
	totalTime = timerClock.getElapsedTime().asSeconds();
	timerString += std::to_string((int)ceil(totalTime));
	timerText.setString(timerString);
	
}

void Timer::Draw(sf::RenderTarget& target)
{
	target.draw(timerText);
}

void Timer::setPosition(sf::Vector2f newPosition)
{
}
