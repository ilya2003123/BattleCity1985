#include "Window.h"

Window::Window(IRenderEngine& engine) noexcept
	: m_engine(engine)
{

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
