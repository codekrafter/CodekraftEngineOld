/*
 * MPlayer.h
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#ifndef MPLAYER_H_
#define MPLAYER_H_

#include <CodekraftEngineBase.h>
#include <RendererModule.h>

namespace ck
{
namespace player
{
class MPlayer: public ck::base::MStartup
{
public:
	MPlayer(unsigned char i, ck::game::GameApp *g);
	virtual ~MPlayer();
	bool onInit();
	bool onShutdown();
	ck::renderer::MRenderer* getRenderer();

private:
	ck::game::GameApp *game;
	ck::renderer::MRenderer *renderer;

};
}
} /* namespace ck */

#endif /* MPLAYER_H_ */
