#include "GameStateManager.h"



GameStateManager::GameStateManager()
{
}

void GameStateManager::handleEvent(const sf::Event & event)
{
	currentState->handleEvent(event);
}

void GameStateManager::render()
{
	currentState->render();
}

void GameStateManager::update(float deltaTime)
{
	currentState->update(deltaTime);
}

void GameStateManager::setState(std::unique_ptr<State> state)
{
	currentState = std::move(state);
}


GameStateManager::~GameStateManager()
{
}
