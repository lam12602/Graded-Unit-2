#include "Score.h"
#include "AssetManager.h"

Score::Score(sf::RenderWindow* newWindow)
	:scoreString()
	, scoreText()
	, position()
	, window(newWindow)
	, totalScore()
{
	scoreText.setFont(AssetManager::RequestFont("Assets/Fonts/mainFont.ttf"));
	scoreText.setCharacterSize(70);
	scoreText.setString("Score: ");
	scoreText.setFillColor(sf::Color::Black);
}

void Score::Update(sf::Time frameTime)
{
}

void Score::Draw(sf::RenderTarget& target)
{
	target.draw(scoreText);
}

void Score::setPosition(sf::Vector2f newPosition)
{
}
