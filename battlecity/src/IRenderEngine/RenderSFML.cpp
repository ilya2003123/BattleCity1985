#include "RenderSFML.h"

RenderSFML::RenderSFML(const std::string& title, const int width, const int height) noexcept
	: m_renderWin(sf::VideoMode(width, height), title, sf::Style::Default),
	m_width(width),
	m_height(height),
	m_isOpen(true),
	m_fps(utils::APP_FPS)
{
	m_renderWin.setFramerateLimit(m_fps);
}

void RenderSFML::clear()
{
	m_renderWin.clear();
}

void RenderSFML::draw(sf::Drawable& drawable)
{
	m_renderWin.draw(drawable);
}

void RenderSFML::display()
{
	m_renderWin.display();
}

void RenderSFML::update(IScene& scene)
{
	sf::Event event;
	while (m_renderWin.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			m_renderWin.close();
		}
	}
	sf::Time frameTime = frameClock.restart();

	scene.update(event, frameTime);
}

bool RenderSFML::isOpen()
{
	return m_renderWin.isOpen();
}
