#include "Game.h"
#include "Screen.h"
#include "LevelScreen.h"

Game::Game()
	: window(sf::VideoMode::getDesktopMode(), "Tower Climb", sf::Style::Close)
	, gameClock()
{
	// Window Setup
	window.setMouseCursorVisible(false);

	// Setup Screens
	currentScreen = new LevelScreen(this);
	
}

void Game::RunGameLoop()
{
	// Repeat as long as the window is open
	while (window.isOpen())
	{
		Update();
		Draw();
		EventHandling();
	}
}

void Game::EventHandling()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			window.close();

		// Close game is Esc is pressed
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();
		}
	}

}

void Game::Update()
{
	sf::Time frameTime = gameClock.restart();

	// Update current screen
	if (currentScreen != nullptr)
	{
		currentScreen->Update(frameTime);
	}
	

	// Handle changes to other screen
}

void Game::Draw()
{
	window.clear();

	// Draw current screen
	if (currentScreen != nullptr)
	{
		currentScreen->Draw(window);
	}
	
	

	window.display();
}
