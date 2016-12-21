/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: Sensor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif

#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## class Sensor
#include "ISensor.h"
//## auto_generated
#include "Train.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## package Train

//## class Sensor

using namespace std;

class Sensor : public ISensor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    virtual ~Sensor();
    
    ////    Operations    ////
    
    // This functions Maps a Channel-Number to its Address
    //## operation convertChannel(int)
    unsigned char convertChannel(int channel);
    
    //## operation getInput(int)
    virtual int getInput(int channel);
    
    //## operation getVoltage(int)
    virtual float getVoltage(int channel);
    
    //## operation lowlvlInit(int,int,int)
    char lowlvlInit(int addr, int num, int state);
    
    ////    Additional operations    ////
    
    ////    Attributes    ////
    
    //## operation getAmpereExtern()
    virtual float getAmpereExtern();
    
    //## operation getAmpereMotor()
    virtual float getAmpereMotor();
    
    //## operation getTemperature()
    virtual float getTemperature();
    
    //## operation getVoltageMotor()
    virtual float getVoltageMotor();
    
    //## operation getDistance()
    float getDistance();
    
    //## operation getIP(char*)
    virtual void getIP(char* ipBuff);
    
    //## operation getVoltageAux()
    virtual float getVoltageAux();
    
    //## operation getVoltageExtern()
    virtual float getVoltageExtern();
    
    //## operation Sensor()
    Sensor();
    
    //## operation getDistanceAbs()
    virtual float getDistanceAbs();
    
    //## operation getDistanceTicks()
    virtual int getDistanceTicks();
    
    //## operation updateDistance()
    virtual void updateDistance();
    
    //## auto_generated
    float getTotalAbsoluteDistance() const;
    
    //## auto_generated
    float getTotalDistance() const;
    
    //## auto_generated
    int getTotalDistanceTicks() const;
    
    //## auto_generated
    void setTotalDistanceTicks(int p_totalDistanceTicks);

protected :

    //## auto_generated
    int getLastDistance() const;
    
    //## auto_generated
    void setLastDistance(int p_lastDistance);
    
    int lastDistance;		//## attribute lastDistance
    
    float totalAbsoluteDistance;		//## attribute totalAbsoluteDistance
    
    float totalDistance;		//## attribute totalDistance
    
    int totalDistanceTicks;		//## attribute totalDistanceTicks

public :

    //## auto_generated
    void setTotalAbsoluteDistance(float p_totalAbsoluteDistance);
    
    //## auto_generated
    int getTotalAbsoluteDistanceTicks() const;
    
    //## auto_generated
    void setTotalAbsoluteDistanceTicks(int p_totalAbsoluteDistanceTicks);
    
    //## auto_generated
    void setTotalDistance(float p_totalDistance);

protected :

    int totalAbsoluteDistanceTicks;		//## attribute totalAbsoluteDistanceTicks
};

//## package Workstation

//## class Sensor

using namespace std;

class Sensor : public ISensor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Sensor();
    
    //## auto_generated
    virtual ~Sensor();
    
    ////    Operations    ////
    
    //## operation getAmpereExtern()
    virtual float getAmpereExtern();
    
    //## operation getAmpereMotor()
    virtual float getAmpereMotor();
    
    //## operation getDistance()
    virtual float getDistance();
    
    //## operation getDistanceAbs()
    virtual float getDistanceAbs();
    
    //## operation getDistanceTicks()
    virtual int getDistanceTicks();
    
    //## operation getIP(char*)
    virtual void getIP(char* ipBuff);
    
    //## operation getInput(int)
    virtual int getInput(int channel);
    
    //## operation getRfid()
    void getRfid();
    
    //## operation getTemperature()
    virtual float getTemperature();
    
    //## operation getVoltage(int)
    virtual float getVoltage(int channel);
    
    //## operation getVoltageAux()
    virtual float getVoltageAux();
    
    //## operation getVoltageExtern()
    virtual float getVoltageExtern();
    
    //## operation getVoltageMotor()
    virtual float getVoltageMotor();
    
    //## operation updateDistance()
    virtual void updateDistance();
    
    ////    Additional operations    ////
    
    //## auto_generated
    float getTotalDistance() const;
    
    //## auto_generated
    void setTotalDistance(float p_totalDistance);
    
    //## auto_generated
    float getTotalDistanceAbs() const;
    
    //## auto_generated
    void setTotalDistanceAbs(float p_totalDistanceAbs);
    
    //## auto_generated
    int getTotalDistanceTicks() const;
    
    //## auto_generated
    void setTotalDistanceTicks(int p_totalDistanceTicks);
    
    ////    Attributes    ////

protected :

    float totalDistance;		//## attribute totalDistance
    
    float totalDistanceAbs;		//## attribute totalDistanceAbs
    
    int totalDistanceTicks;		//## attribute totalDistanceTicks
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/Sensor.h
*********************************************************************/
