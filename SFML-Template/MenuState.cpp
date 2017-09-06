#include "MenuState.h"




MenuState::MenuState(GameStateManager* manager, sf::RenderWindow* window) : State(manager, window),
	playBtn(std::bind(&MenuState::play, this))
{
	font.loadFromFile("assets/ariblk.ttf");

	playBtn.setFont(font);
	playBtn.setString("Play");
	playBtn.setCharacterSize(50);
}

void MenuState::handleEvent(const sf::Event & event)
{
	playBtn.handleEvent(event);
}

void MenuState::render()
{
	window->draw(playBtn);
}

void MenuState::update(int deltaTime)
{
}

void MenuState::play()
{
	std::cout << "Play\n";
}

MenuState::~MenuState()
{
}
