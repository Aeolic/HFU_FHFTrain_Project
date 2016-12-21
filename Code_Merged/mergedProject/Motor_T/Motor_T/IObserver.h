/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Motor_T 
	Configuration 	: Motor_T
	Model Element	: IObserver
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Motor_T/Motor_T/IObserver.h
*********************************************************************/

#ifndef IObserver_H
#define IObserver_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Common.h"
//## package Common

//## class IObserver
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
	File Path	: Motor_T/Motor_T/IObserver.h
*********************************************************************/
