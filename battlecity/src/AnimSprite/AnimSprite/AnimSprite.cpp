#include "AnimSprite.h"

AnimSprite::AnimSprite(const std::map<std::string, Animation>& animations,
    IAnimController* contoller,
    const sf::Time frameTime,
    bool pause, bool repeat) :
    m_animations(animations),
    m_currController(contoller),
    m_animatedSprite(frameTime, pause, repeat)
    {
        m_currentAnimation = &m_animations.begin()->second;
    }

void AnimSprite::setState(const std::string& nameState)
{
    if (auto res = m_animations.find(nameState); res != m_animations.end())
        m_currentAnimation = &res->second;
}

void AnimSprite::setController(IAnimController* contoller)
{
    m_currController = contoller;
}

void AnimSprite::setController(std::function<MoveData(EventData&, AnimData&)> controller)
{
    m_currController = new AnimLambdaController(controller);
}

void AnimSprite::update(sf::Event& event, sf::Time frameTime)
{
    AnimData animData{ m_animations, m_currentAnimation };
    EventData ev{ event, frameTime };

    const MoveData moveData = m_currController->update(ev, animData);

    m_animatedSprite.play(*m_currentAnimation);
    m_animatedSprite.move(moveData.movement * ev.frameTime.asSeconds());

    if (moveData.noKeyPressed)
        m_animatedSprite.stop();

    //noKeyWasPressed = true;
    m_animatedSprite.update(ev.frameTime);
}

void AnimSprite::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
    states.transform *= getTransform();
    target.draw(m_animatedSprite, states);
}