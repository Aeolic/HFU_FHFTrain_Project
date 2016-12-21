/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: IObserver
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/IObserver.h
*********************************************************************/

#ifndef IObserver_H
#define IObserver_H

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

//## class IObserver

using namespace std;

class IObserver {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    IObserver();
    
    //## auto_generated
    virtual ~IObserver() = 0;
    
    ////    Operations    ////
    
    //## operation notify(char*)
    virtual void notify(char* rfidCode) = 0;
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/IObserver.h
*********************************************************************/
