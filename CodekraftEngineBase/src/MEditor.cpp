/*
 * MEditor.cpp
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#include <CodekraftEngineBase.h>
#include <RendererModule.h>
#include <iostream>

namespace ck
{
namespace editor
{
MEditor::MEditor(unsigned char i, ck::game::GameApp *g)
{
	importance = i;
	game = g;
	renderer = new ck::renderer::MRenderer();

}

MEditor::~MEditor()
{
	delete game;
	delete renderer;
}

bool MEditor::onInit()
{
	std::cout << "Starting Editor..." << std::endl;
	game->onInit();
	renderer->onInit();
	return true;
}

bool MEditor::onShutdown()
{
	std::cout << "Shutting Down Editor..." << std::endl;
	game->onShutdown();
	renderer->onShutdown();
	return true;
}

ck::renderer::MRenderer* MEditor::getRenderer()
{
	return renderer;
}

}
} /* namespace ck */
