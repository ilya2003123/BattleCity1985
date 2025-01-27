#include "App.h"

App::App(const std::string& title, const int width, const int height)
	: m_engine(title, width, height),
	m_window(m_engine)
{
	utils::print("Init app");
}

void App::run()
{
	while (m_engine.isOpen())
	{
		m_window.update();
		m_window.draw();
	}
}
