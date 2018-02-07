/*
 * MPlayer.cpp
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#include <CodekraftEngineBase.h>
#include <RendererModule.h>
#include <iostream>

namespace ck
{
namespace player
{
MPlayer::MPlayer(unsigned char i, ck::game::GameApp *g)
{
	importance = i;
	game = g;
	renderer = new ck::renderer::MRenderer();

}

MPlayer::~MPlayer()
{
	delete game;
	delete renderer;
}

bool MPlayer::onInit()
{
	std::cout << "Starting Player..." << std::endl;
	game->onInit();
	renderer->onInit();
	return true;
}

bool MPlayer::onShutdown()
{
	std::cout << "Shutting Down Player..." << std::endl;
	game->onShutdown();
	renderer->onShutdown();
	return true;
}

ck::renderer::MRenderer* MPlayer::getRenderer()
{
	return renderer;
}

}
} /* namespace ck */
