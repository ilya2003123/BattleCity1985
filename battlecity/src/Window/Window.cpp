#include "Window.h"

Window::Window(IRenderEngine& engine) noexcept
	: m_engine(engine)
{
	Map::createMap("data/levels/lvl_1", m_scene, 3);
}

void Window::draw()
{
	sf::RectangleShape backgroundGrey(sf::Vector2f(1600, 1600));
	backgroundGrey.setFillColor(sf::Color{ 80, 80, 80, 255 });

	sf::RectangleShape backgroundBlack(sf::Vector2f(1120, 1400));
	backgroundBlack.setFillColor(sf::Color{ 0, 0, 0, 255 });

	m_engine.clear();
	m_engine.draw(backgroundGrey);
	m_engine.draw(backgroundBlack);
	m_engine.draw(m_scene);
	m_engine.display();
}

void Window::update()
{
	m_engine.update(m_scene);
}
