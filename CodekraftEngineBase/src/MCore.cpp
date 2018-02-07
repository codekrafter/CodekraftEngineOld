/*
 * MCore.cpp
 *
 *  Created on: Feb 6, 2018
 *      Author: chrx
 */

#include <MCore.h>

namespace ck
{

MCore::MCore()
{
	oldTime = 0;
	dt = 0;

}

MCore::~MCore()
{
	// TODO Auto-generated destructor stub
}

void MCore::updateDelta(int n)
{
	int dtt;

	if (oldTime == 0)
	{
		oldTime = n;
		dtt = 1;
	}
	else
	{
		dtt = oldTime - n;
	}
	dt = dtt/1000;
}

} /* namespace ck */
