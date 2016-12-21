/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SensRead_T 
	Configuration 	: SensRead_T
	Model Element	: Sensor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SensRead_T/SensRead_T/Sensor.h
*********************************************************************/

#ifndef Sensor_H
#define Sensor_H

//## auto_generated
#include <oxf/oxf.h>
//## class Sensor
#include "ISensor.h"
//## auto_generated
#include "Train.h"
//## package Train

//## class Sensor
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

#endif
/*********************************************************************
	File Path	: SensRead_T/SensRead_T/Sensor.h
*********************************************************************/
