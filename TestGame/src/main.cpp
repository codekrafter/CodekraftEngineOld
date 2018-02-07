/*
 * main.cpp
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#include <Engine.h>
#include "TestGameApp.h"

int main(int argc, char* argv[])
{
	ckt::TestGameApp *app = new ckt::TestGameApp();

	int returnv = ck::base::runEngine(argc, argv, app);

	delete app;
	return returnv;
}

