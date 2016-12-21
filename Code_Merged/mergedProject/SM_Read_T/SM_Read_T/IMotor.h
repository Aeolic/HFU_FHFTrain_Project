/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_T 
	Configuration 	: SM_Read_T
	Model Element	: IMotor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_T/SM_Read_T/IMotor.h
*********************************************************************/

#ifndef IMotor_H
#define IMotor_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "SM_Read.h"
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
	File Path	: SM_Read_T/SM_Read_T/IMotor.h
*********************************************************************/
