/*
 * Game.h
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#ifndef GAMEAPP_H_
#define GAMEAPP_H_

namespace ck
{
namespace game
{
class GameApp
{
public:
	GameApp();
	virtual ~GameApp();
	virtual bool onInit();
	virtual bool onShutdown();
};
}
} /* namespace ck */

#endif /* GAMEAPP_H_ */
