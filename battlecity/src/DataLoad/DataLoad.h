#pragma once

#include "../Resource_Loader/Resource_Loader.h"
#include "../Atlas/Atlas.h"
#include "../Settings.h"
#include "../AnimSprite/AnimTools/Animated.h"
#include <map>
#include <memory>

namespace Holder
{
	const static std::unique_ptr<Resource_Loader> Atlas = std::make_unique<Resource_Loader>(utils::PATH_TO_TEXTURE);
	using Settings = std::map<std::string, std::vector<std::tuple<int, bool, int, int>>>;
}

namespace LoaderDynamic
{

	static std::vector<sf::IntRect> rebuildFrame(sf::IntRect rect, int nFrames = 2, int sizeRect = 16)
	{
		std::vector<sf::IntRect> rects;

		for (int i = 0; i < nFrames; ++i)
			rects.push_back(sf::IntRect(rect.left + i * sizeRect, rect.top, sizeRect, sizeRect));

		return rects;
	}

	static auto loaderDynamicData(const std::vector<sf::IntRect>& rowRect, const Holder::Settings& settings)
	{
		std::map<std::string, std::vector<sf::IntRect>> framesResult;

		for (const auto& it : settings)
		{
			const auto nameState = it.first;
			std::vector<sf::IntRect> currRects;
			for (const auto& framesData : it.second)
			{
				const auto [id, isRebuild, nFrame, newFrameSize] = framesData;
				if (isRebuild)
				{
					const auto rebuildFrames = rebuildFrame(rowRect[id], nFrame, newFrameSize);
					for (const auto& newFrame : rebuildFrames)
						currRects.push_back(newFrame);
				}
				else
				{
					currRects.push_back(rowRect[id]);
				}
			}
			framesResult[nameState] = currRects;
		}

		return framesResult;
	}

	static auto createDynamicAnimations(const std::map<std::string, std::vector<sf::IntRect>>& frames)
	{
		std::map<std::string, Animation> animations;

		for (const auto [name, rects] : frames)
			animations[name] = Tools::generateAnimation(Holder::Atlas->getTexture(), rects);

		return animations;
	}
}

namespace LoaderStatic
{
	static std::vector<sf::IntRect> rebuildFrame(sf::IntRect rect, int nFrames = 2, int sizeRect = 16)
	{
		std::vector<sf::IntRect> rects;

		for (int i = 0; i < nFrames; ++i)
			rects.push_back(sf::IntRect(rect.left + i * sizeRect, rect.top, sizeRect, sizeRect));

		return rects;
	}

	static auto loaderStaticData(const std::vector<sf::IntRect>& rowRect, const Holder::Settings& settings)
	{
		std::map<std::string, std::vector<sf::IntRect>> framesResult;

		for (const auto& it : settings)
		{
			const auto nameState = it.first;
			std::vector<sf::IntRect> currRects;
			for (const auto& framesData : it.second)
			{
				const auto [id, isRebuild, nFrame, newFrameSize] = framesData;
				if (isRebuild)
				{
					const auto rebuildFrames = rebuildFrame(rowRect[id], nFrame, newFrameSize);
					for (const auto& newFrame : rebuildFrames)
						currRects.push_back(newFrame);
				}
				else
				{
					currRects.push_back(rowRect[id]);
				}
			}
			framesResult[nameState] = currRects;
		}

		return framesResult;
	}
}

namespace resource
{
	static auto createDynamic(const std::string& path, const Holder::Settings& settings)
	{
		const auto framesResult = LoaderDynamic::loaderDynamicData(Atlas::createIntRect(path), settings);

		return LoaderDynamic::createDynamicAnimations(framesResult);
	}
	static auto createStatic(const std::string& path, const Holder::Settings& settings)
	{
		const auto frameResult = LoaderStatic::loaderStaticData(Atlas::createIntRect(path), settings);

		return frameResult;
	}

}
