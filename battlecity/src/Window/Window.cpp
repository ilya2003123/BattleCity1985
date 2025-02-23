#include "Window.h"

Window::Window(IRenderEngine& engine) noexcept
	: m_engine(engine)
{
	Map::createMap("data/levels/lvl_1", m_scene);
}

void Window::draw()
{
	m_engine.clear();
	m_engine.draw(m_scene);
	m_engine.display();
}

void Window::update()
{
	m_engine.update(m_scene);
}
