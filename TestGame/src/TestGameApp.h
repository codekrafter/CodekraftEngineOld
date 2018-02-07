/*
 * TestGameApp.h
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#ifndef TESTGAMEAPP_H_
#define TESTGAMEAPP_H_

#include <Engine.h>

namespace ckt
{

class TestGameApp: public virtual ck::game::GameApp
{
public:
	TestGameApp();
	virtual ~TestGameApp();
	virtual bool onInit();
	virtual bool onShutdown();
};

} /* namespace ck */

#endif /* TESTGAMEAPP_H_ */
