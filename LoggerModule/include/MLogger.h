/*
 * MLogger.h
 *
 *  Created on: Feb 6, 2018
 *      Author: chrx
 */

#ifndef MLOGGER_H_
#define MLOGGER_H_

#include <Module.h>

namespace ck
{
namespace logger
{

class MLogger: public base::Module
{
public:
	MLogger();
	virtual ~MLogger();
};

} /* namespace logger */
} /* namespace ck */

#endif /* MLOGGER_H_ */
