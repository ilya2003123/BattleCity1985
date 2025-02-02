#include "Window.h"

Window::Window(IRenderEngine& engine) noexcept
	: m_engine(engine)
{
	m_scene.addISprite(new IWater(0, 0));
	m_scene.addISprite(new IBrickWall(100, 0));
	m_scene.addISprite(new ITank(0, 0));
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
