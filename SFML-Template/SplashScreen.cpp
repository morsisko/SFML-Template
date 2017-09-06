#include "SplashScreen.h"



void SplashScreen::onTimeOver()
{
	manager->setState(std::make_unique<MenuState>(manager, window));
}

SplashScreen::SplashScreen(GameStateManager* manager, sf::RenderWindow* window, int miliseconds) : State(manager, window)
{
	splashTexture.loadFromFile("assets/logo.png");
	splashSprite.setTexture(splashTexture);

	splashSprite.setPosition(window->getSize().x / 2 - splashTexture.getSize().x / 2, window->getSize().y / 2 - splashTexture.getSize().y / 2);

	this->disappearTime = miliseconds;
}

void SplashScreen::handleEvent(const sf::Event & event)
{
}

void SplashScreen::render()
{
	window->draw(splashSprite);
}

void SplashScreen::update(int deltaTime)
{
	elapsedTime += deltaTime;

	if (elapsedTime >= disappearTime)
		onTimeOver();
}


SplashScreen::~SplashScreen()
{
}
