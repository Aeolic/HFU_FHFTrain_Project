/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: SensReader
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/SensReader.h
*********************************************************************/

#ifndef SensReader_H
#define SensReader_H

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
//## dependency Sensor
#include "Sensor.h"
//## link itsSensor
class ISensor;

//## link itsSHM_Connection
class SHM_Connection;

//## package Common

//## class SensReader

using namespace std;

class SensReader {
    ////    Constructors and destructors    ////
    
public :

    //## operation SensReader()
    SensReader();
    
    //## auto_generated
    ~SensReader();
    
    ////    Operations    ////
    
    //## operation read()
    void read();
    
    ////    Additional operations    ////
    
    //## auto_generated
    char getIpBuffer(int i1) const;
    
    //## auto_generated
    void setIpBuffer(int i1, char p_ipBuffer);
    
    //## auto_generated
    SHM_Connection* getItsSHM_Connection() const;
    
    //## auto_generated
    void setItsSHM_Connection(SHM_Connection* p_SHM_Connection);
    
    //## auto_generated
    ISensor* getItsSensor() const;
    
    //## auto_generated
    void setItsSensor(ISensor* p_ISensor);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    char ipBuffer[15];		//## attribute ipBuffer
    
    ////    Relations and components    ////
    
    SHM_Connection* itsSHM_Connection;		//## link itsSHM_Connection
    
    ISensor* itsSensor;		//## link itsSensor
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/SensReader.h
*********************************************************************/
