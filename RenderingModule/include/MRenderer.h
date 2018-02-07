/*
 * MRendering.h
 *
 *  Created on: Feb 6, 2018
 *      Author: chrx
 */

//#include <CodekraftEngineBase.h>
#include <Module.h>

#include <glfw3.h>

#ifndef INCLUDE_MRENDERING_H_
#define INCLUDE_MRENDERING_H_

namespace ck
{
namespace renderer
{

class MRenderer: public ck::base::Module
{
public:
	MRenderer();
	virtual ~MRenderer();
	bool onInit();
	bool onShutdown();
	void update();
	bool shouldClose();
private:
	const unsigned int SCR_WIDTH = 800;
	const unsigned int SCR_HEIGHT = 600;
	GLFWwindow* window;
	static void framebuffer_size_callback(GLFWwindow* window, int width,
			int height);
	void processInput(GLFWwindow *window);
};

} /* namespace render */
} /* namespace ck */

#endif /* INCLUDE_MRENDERING_H_ */
