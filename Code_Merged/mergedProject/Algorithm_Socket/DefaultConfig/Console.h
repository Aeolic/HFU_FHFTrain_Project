/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: Console
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/Console.h
*********************************************************************/

#ifndef Console_H
#define Console_H

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
//## link itsSHM_Connection
class SHM_Connection;

//## package Common

//## class Console

using namespace std;

class Console {
    ////    Constructors and destructors    ////
    
public :

    //## operation Console()
    Console();
    
    //## auto_generated
    ~Console();
    
    ////    Additional operations    ////
    
    //## auto_generated
    SHM_Connection* getItsSHM_Connection() const;
    
    //## auto_generated
    void setItsSHM_Connection(SHM_Connection* p_SHM_Connection);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    SHM_Connection* itsSHM_Connection;		//## link itsSHM_Connection
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/Console.h
*********************************************************************/
