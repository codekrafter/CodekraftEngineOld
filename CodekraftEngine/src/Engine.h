/*
 * Engine.h
 *
 *      Author: chrx
 */

#include <CodekraftEngineBase.h>
#include <LoggerModule.h>
#include <RendererModule.h>


#ifndef ENGINE_H_
#define ENGINE_H_

namespace ck
{
namespace base
{
int runEngine(int argc, char* argv[], ck::game::GameApp *gameApp);
}
}

#endif /* ENGINE_H_ */
