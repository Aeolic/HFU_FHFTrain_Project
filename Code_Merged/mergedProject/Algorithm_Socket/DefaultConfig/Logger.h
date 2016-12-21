/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: Logger
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/Logger.h
*********************************************************************/

#ifndef Logger_H
#define Logger_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Common.h"
//## package Common

//## class Logger

using namespace std;

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
	File Path	: Algorithm_Socket/DefaultConfig/Logger.h
*********************************************************************/
