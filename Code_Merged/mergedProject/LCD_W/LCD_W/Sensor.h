/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: LCD_W 
	Configuration 	: LCD_W
	Model Element	: Sensor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: LCD_W/LCD_W/Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//## auto_generated
#include <oxf/oxf.h>
//## class Sensor
#include "ISensor.h"
//## package Workstation

//## class Sensor
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
	File Path	: LCD_W/LCD_W/Sensor.h
*********************************************************************/
