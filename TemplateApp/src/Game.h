#pragma once

#include "Application.h"

namespace App {

	class Game : public Application
	{
	public:
		Game(const AppSpecification& specs);
		~Game() override;

		void OnUpdate(sf::Time ts) override;
		void OnEvent(sf::Event& event) override;
	private:
		sf::CircleShape m_Shape;
	};

}

