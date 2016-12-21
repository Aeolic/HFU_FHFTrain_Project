/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_W 
	Configuration 	: SM_Read_W
	Model Element	: IObserver
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_W/SM_Read_W/IObserver.h
*********************************************************************/

#ifndef IObserver_H
#define IObserver_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "SM_Read.h"
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
	File Path	: SM_Read_W/SM_Read_W/IObserver.h
*********************************************************************/
