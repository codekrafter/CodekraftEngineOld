/*
 * TestGameApp.cpp
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#include <iostream>
#include "TestGameApp.h"

namespace ckt
{

TestGameApp::TestGameApp()
{
	// TODO Auto-generated constructor stub

}

TestGameApp::~TestGameApp()
{
	// TODO Auto-generated destructor stub
}

bool TestGameApp::onInit()
{
	std::cout << "Initlizing Game..." << std::endl;
	return true;
}

bool TestGameApp::onShutdown()
{
	std::cout << "Shutting down Game..." << std::endl;
	return true;
}

} /* namespace ck */
