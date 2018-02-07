/*
 * main.cpp
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#include "Engine.h"

#include <RendererModule.h>
#include <iostream>

namespace ck
{
namespace base
{

int runEngine(int argc, char* argv[], ck::game::GameApp *gameApp)
{
	int startMode = 0;

	if (argc > 1)
	{
		for (int i = 1; i < argc; i++)
		{
			std::string carg = argv[i];
			std::cout << carg << std::endl;

			if (carg == "--e" || carg == "-e" || carg == "--editor"
					|| carg == "-editor")
			{
				startMode = 2;
			}
			else if (carg == "--g" || carg == "-g" || carg == "--game"
					|| carg == "-game")
			{
				startMode = 1;
			}
			else
			{
				std::cout << "Unrecognized argument: " << carg << "Exiting..."
						<< std::endl;
				return 0;
			}
		}
	}
	else
	{
		std::cout << "no start mode specified, starting player module"
				<< std::endl;
		startMode = 1;
	}

	ck::base::MStartup *startModule;
	switch (startMode)
	{
	case 1:
		startModule = new ck::player::MPlayer(255, gameApp);
		break;
	case 2:
		startModule = new ck::editor::MEditor(255, gameApp);
		break;
	default:
		std::cout << "Invalid startup mode " << startMode << "." << std::endl;
		return 0;
	}

	startModule->onInit();

	while(!startModule->getRenderer()->shouldClose())
	{
		startModule->getRenderer()->update();
	}

	startModule->onShutdown();
	delete startModule;
	return 0;
}
}
}
