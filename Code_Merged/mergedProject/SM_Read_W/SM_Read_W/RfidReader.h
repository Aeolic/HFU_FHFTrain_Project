/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_W 
	Configuration 	: SM_Read_W
	Model Element	: RfidReader
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_W/SM_Read_W/RfidReader.h
*********************************************************************/

#ifndef RfidReader_H
#define RfidReader_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "SM_Read.h"
//## auto_generated
#include "Common.h"
//## operation RegisterListener(IObserver)
class IObserver;

//## package Common

//## class RfidReader
class RfidReader {
    ////    Constructors and destructors    ////
    
public :

    //## operation RfidReader()
    RfidReader();
    
    //## auto_generated
    ~RfidReader();
    
    ////    Operations    ////
    
    //## operation RegisterListener(IObserver)
    void RegisterListener(IObserver* newListener);
    
    //## operation notifyObservers(char*)
    void notifyObservers(char* rfidCode);
    
    //## operation openPort(int*)
    int openPort(int* fd);
    
    //## operation readCard(int,char*)
    int readCard(int fd, char* buf);
    
    ////    Additional operations    ////
    
    //## auto_generated
    IObserver* getListener() const;
    
    //## auto_generated
    void setListener(IObserver* p_Listener);
    
    ////    Attributes    ////

protected :

    IObserver* Listener;		//## attribute Listener
};

#endif
/*********************************************************************
	File Path	: SM_Read_W/SM_Read_W/RfidReader.h
*********************************************************************/
