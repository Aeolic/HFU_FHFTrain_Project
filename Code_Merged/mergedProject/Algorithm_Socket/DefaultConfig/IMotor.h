/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: IMotor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/IMotor.h
*********************************************************************/

#ifndef IMotor_H
#define IMotor_H

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

//## class IMotor

using namespace std;

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
	File Path	: Algorithm_Socket/DefaultConfig/IMotor.h
*********************************************************************/
