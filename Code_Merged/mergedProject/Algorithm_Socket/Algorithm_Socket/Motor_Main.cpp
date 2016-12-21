/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Motor_Main
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/Motor_Main.cpp
*********************************************************************/

//## auto_generated
#include "Motor_Main.h"
//## link itsIMotor
#include "IMotor.h"
//## link itsLogger
#include "Logger.h"
//## link itsSHM_Connection
#include "SHM_Connection.h"
//## auto_generated
#include <sched.h>
//## package Common

//## class Motor_Main
Motor_Main::Motor_Main() : cnt(0), distance(0.0) {
    itsIMotor = NULL;
    itsLogger = NULL;
    itsSHM_Connection = NULL;
    //#[ operation Motor_Main()
    
    
    itsSHM_Connection = SHM_Connection::instance();
    itsIMotor = new Motor(); 
    itsIMotor->setPower(0, 0);  
    
    
    while(1) { 
     writeSpeed();
     usleep(1000*20) ;
    }
    //#]
}

Motor_Main::~Motor_Main() {
    cleanUpRelations();
}

IMotor* Motor_Main::getItsIMotor() const {
    return itsIMotor;
}

void Motor_Main::setItsIMotor(IMotor* p_IMotor) {
    itsIMotor = p_IMotor;
}

Logger* Motor_Main::getItsLogger() const {
    return itsLogger;
}

void Motor_Main::setItsLogger(Logger* p_Logger) {
    itsLogger = p_Logger;
}

SHM_Connection* Motor_Main::getItsSHM_Connection() const {
    return itsSHM_Connection;
}

void Motor_Main::setItsSHM_Connection(SHM_Connection* p_SHM_Connection) {
    itsSHM_Connection = p_SHM_Connection;
}

void Motor_Main::cleanUpRelations() {
    if(itsIMotor != NULL)
        {
            itsIMotor = NULL;
        }
    if(itsLogger != NULL)
        {
            itsLogger = NULL;
        }
    if(itsSHM_Connection != NULL)
        {
            itsSHM_Connection = NULL;
        }
}

void Motor_Main::readSpeed() {
    //#[ operation readSpeed()
    itsSHM_Connection->read(Speed, power);  
    itsSHM_Connection->read(Distance, distance);
    //#]
}

void Motor_Main::writeSpeed() {
    //#[ operation writeSpeed()
    if(cnt++==20) {
     	readSpeed();  
     	cnt = 0;
    }
    
    itsIMotor->setPower(power, distance);
    //#]
}

int Motor_Main::getCnt() const {
    return cnt;
}

void Motor_Main::setCnt(int p_cnt) {
    cnt = p_cnt;
}

float Motor_Main::getDistance() const {
    return distance;
}

void Motor_Main::setDistance(float p_distance) {
    distance = p_distance;
}

float Motor_Main::getPower() const {
    return power;
}

void Motor_Main::setPower(float p_power) {
    power = p_power;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/Motor_Main.cpp
*********************************************************************/
