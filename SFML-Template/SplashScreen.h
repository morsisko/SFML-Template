#pragma once
#include "State.h"
class SplashScreen :
	public State
{
private:
	sf::Texture splashTexture;
	sf::Sprite splashSprite;
public:
	SplashScreen(GameStateManager* manager, sf::RenderWindow* window);
	virtual void handleEvent(const sf::Event &event);
	virtual void render();
	virtual void update(int deltaTime);
	virtual ~SplashScreen();
};

