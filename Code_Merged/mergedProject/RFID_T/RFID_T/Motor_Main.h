/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: RFID_T 
	Configuration 	: RFID_T
	Model Element	: Motor_Main
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: RFID_T/RFID_T/Motor_Main.h
*********************************************************************/

#ifndef Motor_Main_H
#define Motor_Main_H

//## auto_generated
#include <oxf/oxf.h>
//## dependency Motor
#include "Motor.h"
//## auto_generated
#include "Common.h"
//## link itsIMotor
class IMotor;

//## link itsLogger
class Logger;

//## link itsSHM_Connection
class SHM_Connection;

//## package Common

//## class Motor_Main
class Motor_Main {
    ////    Constructors and destructors    ////
    
public :

    //## operation Motor_Main()
    Motor_Main();
    
    //## auto_generated
    ~Motor_Main();
    
    ////    Additional operations    ////
    
    //## auto_generated
    IMotor* getItsIMotor() const;
    
    //## auto_generated
    void setItsIMotor(IMotor* p_IMotor);
    
    //## auto_generated
    Logger* getItsLogger() const;
    
    //## auto_generated
    void setItsLogger(Logger* p_Logger);
    
    //## auto_generated
    SHM_Connection* getItsSHM_Connection() const;
    
    //## auto_generated
    void setItsSHM_Connection(SHM_Connection* p_SHM_Connection);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    IMotor* itsIMotor;		//## link itsIMotor
    
    Logger* itsLogger;		//## link itsLogger
    
    SHM_Connection* itsSHM_Connection;		//## link itsSHM_Connection

public :

    //## operation readSpeed()
    void readSpeed();
    
    //## operation writeSpeed()
    void writeSpeed();
    
    //## auto_generated
    int getCnt() const;
    
    //## auto_generated
    void setCnt(int p_cnt);
    
    //## auto_generated
    float getDistance() const;
    
    //## auto_generated
    void setDistance(float p_distance);
    
    //## auto_generated
    float getPower() const;
    
    //## auto_generated
    void setPower(float p_power);

protected :

    int cnt;		//## attribute cnt
    
    float distance;		//## attribute distance
    
    float power;		//## attribute power
};

#endif
/*********************************************************************
	File Path	: RFID_T/RFID_T/Motor_Main.h
*********************************************************************/
