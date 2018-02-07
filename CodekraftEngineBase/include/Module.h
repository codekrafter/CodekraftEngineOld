/*
 * Module.h
 *
 *  Created on: Feb 5, 2018
 *      Author: chrx
 */

#ifndef MODULE_H_
#define MODULE_H_

namespace ck
{
namespace base {
class Module
{
public:
	Module();
	virtual ~Module() = 0;
	virtual bool onInit() = 0;
	virtual bool onShutdown() = 0;
protected:
	/// Used to determine load order, and if there are conflicting calls.
	unsigned char importance = 0;
	/// True if shutdown has been called, false otherwise
	bool shuttingDown;
};

}/* namespace ck */
}

#endif /* MODULE_H_ */
