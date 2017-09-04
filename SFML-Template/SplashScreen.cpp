#include "SplashScreen.h"



SplashScreen::SplashScreen(GameStateManager* manager, sf::RenderWindow* window) : State(manager, window)
{
	splashTexture.loadFromFile("assets/logo.png");
	splashSprite.setTexture(splashTexture);

	splashSprite.setPosition(window->getSize().x / 2 - splashTexture.getSize().x / 2, window->getSize().y / 2 - splashTexture.getSize().y / 2);
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
}


SplashScreen::~SplashScreen()
{
}
