/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SensRead_T 
	Configuration 	: SensRead_T
	Model Element	: Logger
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SensRead_T/SensRead_T/Logger.h
*********************************************************************/

#ifndef Logger_H
#define Logger_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Common.h"
//## package Common

//## class Logger
class Logger {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation error(std::string)
    static void error(std::string message);
    
    //## auto_generated
    Logger();
    
    //## auto_generated
    ~Logger();
    
    //## operation debug(std::string)
    static void debug(std::string msg);
};

#endif
/*********************************************************************
	File Path	: SensRead_T/SensRead_T/Logger.h
*********************************************************************/
