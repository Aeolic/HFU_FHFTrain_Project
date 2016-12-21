/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: ISensor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/ISensor.h
*********************************************************************/

#ifndef ISensor_H
#define ISensor_H

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

//## class ISensor

using namespace std;

class ISensor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ISensor();
    
    //## auto_generated
    virtual ~ISensor() = 0;
    
    ////    Operations    ////
    
    //## operation getAmpereExtern()
    virtual float getAmpereExtern() = 0;
    
    //## operation getAmpereMotor()
    virtual float getAmpereMotor() = 0;
    
    //## operation getDistance()
    virtual float getDistance() = 0;
    
    //## operation getDistanceAbs()
    virtual float getDistanceAbs() = 0;
    
    //## operation getDistanceTicks()
    virtual int getDistanceTicks() = 0;
    
    //## operation getIP(char*)
    virtual void getIP(char* ipBuff) = 0;
    
    //## operation getInput(int)
    virtual int getInput(int channel) = 0;
    
    //## operation getTemperature()
    virtual float getTemperature() = 0;
    
    //## operation getVoltage(int)
    virtual float getVoltage(int channel) = 0;
    
    //## operation getVoltageAux()
    virtual float getVoltageAux() = 0;
    
    //## operation getVoltageExtern()
    virtual float getVoltageExtern() = 0;
    
    //## operation getVoltageMotor()
    virtual float getVoltageMotor() = 0;
    
    //## operation updateDistance()
    virtual void updateDistance() = 0;
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/ISensor.h
*********************************************************************/
