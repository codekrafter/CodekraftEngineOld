/*
 * MCore.h
 *
 *  Created on: Feb 6, 2018
 *      Author: chrx
 */

#ifndef INCLUDE_MCORE_H_
#define INCLUDE_MCORE_H_

#include <Module.h>

namespace ck
{

class MCore: public base::Module
{
public:
	MCore();
	virtual ~MCore();
	void updateDelta(int newTime);
	/// Delta Time
	double dt;
private:
	int oldTime;
};

} /* namespace ck */

#endif /* INCLUDE_MCORE_H_ */
