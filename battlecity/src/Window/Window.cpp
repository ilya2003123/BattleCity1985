#include "Window.h"

Window::Window(IRenderEngine& engine) noexcept
	: m_engine(engine)
{
	auto water = new AnimSprite(resource::dataForWater(), new AnimWaterController(), sf::seconds(0.5f));
	water->setPosition(utils::waterPosition);
	m_scene.addISprite(water);

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
