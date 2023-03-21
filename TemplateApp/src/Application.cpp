#include "Application.h"

namespace App {

	Application::Application(const AppSpecification& specs)
		: m_Specs(specs),
		m_Window(sf::VideoMode(specs.Width, specs.Height), specs.Name)
	{
		_ASSERT(!s_App);
		s_App = this;
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		sf::Clock clock;

		while (m_Window.isOpen())
		{
			sf::Event event;
			while (m_Window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					m_Window.close();

				OnEvent(event);
			}

			m_Window.clear();
			OnUpdate(clock.restart());
			m_Window.display();
		}
	}

}
