/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Motor_T 
	Configuration 	: Motor_T
	Model Element	: Console
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Motor_T/Motor_T/Console.h
*********************************************************************/

#ifndef Console_H
#define Console_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Common.h"
//## link itsSHM_Connection
class SHM_Connection;

//## package Common

//## class Console
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
	File Path	: Motor_T/Motor_T/Console.h
*********************************************************************/
