#pragma once

#include "IRenderEngine.h"
#include "../Settings.h"

class RenderSFML : public IRenderEngine
{
public:
	RenderSFML() = delete;
	RenderSFML(const std::string& title, const int width, const int height) noexcept;
	RenderSFML(const RenderSFML& other) = delete;
	RenderSFML(RenderSFML&& other) noexcept = default;
	RenderSFML& operator=(const RenderSFML& other) = delete;
	RenderSFML& operator=(RenderSFML&& other) noexcept = default;
	virtual ~RenderSFML() = default;

	void clear() override;
	void draw(sf::Drawable& drawable) override;
	void display() override;
	void update(IScene& scene) override;
	bool isOpen();

private:
	sf::RenderWindow m_renderWin;
	sf::Clock frameClock;

	std::string m_title;
	int m_width = 0;
	int m_height = 0;
	int m_fps = 0;
	bool m_isOpen = false;
};