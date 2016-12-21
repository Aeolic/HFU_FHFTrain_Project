/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SensRead_W 
	Configuration 	: SensRead_W
	Model Element	: Common
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SensRead_W/SensRead_W/Common.h
*********************************************************************/

#ifndef Common_H
#define Common_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
class IObserver;

//## auto_generated
class ISensor;

//## auto_generated
class Observer;

//## auto_generated
class RfidReader;

//## auto_generated
class Rfid_Main;

//## auto_generated
class SHM_Connection;

//## auto_generated
class SensReader;

//## package Common


//## type speed
typedef float speed;

//## type shm_data
struct shm_data {
    speed target_speed;		//## attribute target_speed
    char ip[15];		//## attribute ip
    float ampereExtern;		//## attribute ampereExtern
    float ampereMotor;		//## attribute ampereMotor
    float temperature;		//## attribute temperature
    float voltageMotor;		//## attribute voltageMotor
    float voltageExtern;		//## attribute voltageExtern
    float distanceAbs;		//## attribute distanceAbs
    float distance;		//## attribute distance
    int distanceTicks;		//## attribute distanceTicks
    float voltageAux;		//## attribute voltageAux
    char rfid[15];		//## attribute rfid
    float AfterSpeed;		//## attribute AfterSpeed
    float BeforeSpeed;		//## attribute BeforeSpeed
    float TagUntil;		//## attribute TagUntil
    float LastTag;		//## attribute LastTag
};

//## type Type
typedef enum Type {
    Speed = 1,
    IP = 2,
    Temperature = 3,
    VoltageExtern = 4,
    VoltageMotor = 5,
    VoltageAux = 6,
    AmpereExtern = 7,
    AmpereMotor = 8,
    Distance = 9,
    DistanceAbs = 10,
    DistanceTicks = 11,
    Rfid = 12,
    BeforeSpeed = 13,
    AfterSpeed = 14,
    TagUntil = 15,
    LastTag = 16
} Type;

//## type schedParam
struct schedParam {
    int sched_priority;		//## attribute sched_priority
};

#endif
/*********************************************************************
	File Path	: SensRead_W/SensRead_W/Common.h
*********************************************************************/
