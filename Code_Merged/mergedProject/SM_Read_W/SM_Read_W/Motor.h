/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_W 
	Configuration 	: SM_Read_W
	Model Element	: Motor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_W/SM_Read_W/Motor.h
*********************************************************************/

#ifndef Motor_H
#define Motor_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "SM_Read.h"
//## operation setPower(speed,float)
#include "Common.h"
//## class Motor
#include "IMotor.h"
//## package Workstation

//## class Motor
class Motor : public IMotor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Motor();
    
    //## auto_generated
    virtual ~Motor();
    
    ////    Operations    ////
    
    //## operation setPower(speed,float)
    virtual void setPower(const speed& s, float distance);
};

#endif
/*********************************************************************
	File Path	: SM_Read_W/SM_Read_W/Motor.h
*********************************************************************/
