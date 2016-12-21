/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Console_T 
	Configuration 	: Console_T
	Model Element	: IMotor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Console_T/Console_T/IMotor.h
*********************************************************************/

#ifndef IMotor_H
#define IMotor_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Common.h"
//## package Common

//## class IMotor
class IMotor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    IMotor();
    
    //## auto_generated
    virtual ~IMotor() = 0;
    
    ////    Operations    ////
    
    //## operation setPower(speed,float)
    virtual void setPower(const speed& s, float distance) = 0;
};

#endif
/*********************************************************************
	File Path	: Console_T/Console_T/IMotor.h
*********************************************************************/
