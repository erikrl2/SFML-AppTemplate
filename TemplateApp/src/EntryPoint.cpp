#include "Application.h"

int main()
{
	auto app = App::CreateApplication();

	app->Run();

	delete app;

	return 0;
}