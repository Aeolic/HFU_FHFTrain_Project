/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: RfidReader
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/RfidReader.h
*********************************************************************/

#ifndef RfidReader_H
#define RfidReader_H

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
//## operation RegisterListener(IObserver)
class IObserver;

//## package Common

//## class RfidReader

using namespace std;

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
	File Path	: Algorithm_Socket/Algorithm_Socket/RfidReader.h
*********************************************************************/
