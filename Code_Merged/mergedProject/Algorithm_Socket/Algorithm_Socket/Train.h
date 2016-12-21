/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Train
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/Train.h
*********************************************************************/

#ifndef Train_H
#define Train_H

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
	File Path	: Algorithm_Socket/Algorithm_Socket/Train.h
*********************************************************************/
