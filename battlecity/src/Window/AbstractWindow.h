#pragma once

class AbstractWindow
{
public:
	AbstractWindow() = default;
	AbstractWindow(const AbstractWindow& other) = delete;
	AbstractWindow(AbstractWindow&& other) noexcept = default;
	AbstractWindow& operator=(const AbstractWindow& other) = delete;
	AbstractWindow& operator=(AbstractWindow&& other) noexcept = default;
	virtual ~AbstractWindow() = default;

	virtual void draw() = 0;
	virtual void update() = 0;
};