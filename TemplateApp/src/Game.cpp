#include "Game.h"

namespace App {

	Game::Game(const AppSpecification& specs)
		: Application(specs)
	{
		m_Shape.setRadius(100);
		m_Shape.setFillColor(sf::Color::Green);
	}

	Game::~Game()
	{
	}

	void Game::OnUpdate(sf::Time ts)
	{
		m_Window.draw(m_Shape);
	}

	void Game::OnEvent(sf::Event& event)
	{
	}

	Application* CreateApplication()
	{
		return new Game({ "App" });
	}

}

