#pragma once

#include <SFML/Graphics.hpp>

int main();

namespace App {

	struct AppSpecification
	{
		std::string Name = "App";
		uint32_t Width = 640;
		uint32_t Height = 480;
	};

	class Application
	{
	public:
		Application(const AppSpecification& specs);
		virtual ~Application();

		virtual void OnUpdate(sf::Time ts) = 0;
		virtual void OnEvent(sf::Event& event) = 0;

		sf::RenderWindow& GetWindow() { return m_Window; }

		static Application& Get() { return *s_App; }
	private:
		void Run();
	private:
		AppSpecification m_Specs;
	protected:
		sf::RenderWindow m_Window;
	private:
		inline static Application* s_App;
		friend int ::main();
	};

	Application* CreateApplication();

}

