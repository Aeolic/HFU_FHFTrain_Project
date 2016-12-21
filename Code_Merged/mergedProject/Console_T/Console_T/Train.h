/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Console_T 
	Configuration 	: Console_T
	Model Element	: Train
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Console_T/Console_T/Train.h
*********************************************************************/

#ifndef Train_H
#define Train_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
class Altera;

//## auto_generated
class LCD;

//## auto_generated
class Motor;

//## auto_generated
class Sensor;

//## package Train


//## type rawDummy
struct rawDummy {
    unsigned char rawlowbyte;		//## attribute rawlowbyte
    unsigned char rawhighbyte;		//## attribute rawhighbyte
};

//## type rawDataU
union rawDataU {
    rawDummy bytewise;		//## attribute bytewise
    short wordwise;		//## attribute wordwise
};

//## type RAWDATA
typedef rawDataU RAWDATA;

#endif
/*********************************************************************
	File Path	: Console_T/Console_T/Train.h
*********************************************************************/
