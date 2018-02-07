/*
 * StartupModule.h
 *
 *  Created on: Feb 6, 2018
 *      Author: chrx
 */

#ifndef INCLUDE_MSTARTUP_H_
#define INCLUDE_MSTARTUP_H_

#include <Module.h>
#include <MRenderer.h>

namespace ck
{
namespace base
{
class MStartup: public virtual base::Module
{
public:
	MStartup();
	virtual ~MStartup() = 0;
	virtual ck::renderer::MRenderer* getRenderer() = 0;
};
}
} /* namespace ck */

#endif /* INCLUDE_MSTARTUP_H_ */
