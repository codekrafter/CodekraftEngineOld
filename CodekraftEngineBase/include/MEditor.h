/*
 * MEditor.h
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#ifndef MEDITOR_H_
#define MEDITOR_H_

#include <CodekraftEngineBase.h>
#include <RendererModule.h>

namespace ck
{
namespace editor
{
class MEditor: public ck::base::MStartup
{
public:
	MEditor(unsigned char i, ck::game::GameApp *g);
	virtual ~MEditor();
	bool onInit();
	bool onShutdown();
	ck::renderer::MRenderer* getRenderer();

private:
	ck::game::GameApp *game;
	ck::renderer::MRenderer *renderer;
};
}
} /* namespace ck */

#endif /* MEDITOR_H_ */
