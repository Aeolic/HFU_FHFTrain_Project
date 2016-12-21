/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Observer
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/Observer.h
*********************************************************************/

#ifndef Observer_H
#define Observer_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## class Observer
#include "IObserver.h"
//## auto_generated
#include "Common.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## link itsSHM_Connection
class SHM_Connection;

//## package Common

//## class Observer

using namespace std;

class Observer : public IObserver {
    ////    Constructors and destructors    ////
    
public :

    //## operation Observer()
    Observer();
    
    //## auto_generated
    virtual ~Observer();
    
    ////    Operations    ////
    
    //## operation notify(char*)
    virtual void notify(char* rfidCode);
    
    ////    Additional operations    ////
    
    //## auto_generated
    float getPwr() const;
    
    //## auto_generated
    void setPwr(float p_pwr);
    
    //## auto_generated
    char getRfidBuf(int i1) const;
    
    //## auto_generated
    void setRfidBuf(int i1, char p_rfidBuf);
    
    //## auto_generated
    SHM_Connection* getItsSHM_Connection() const;
    
    //## auto_generated
    void setItsSHM_Connection(SHM_Connection* p_SHM_Connection);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    float pwr;		//## attribute pwr
    
    char rfidBuf[15];		//## attribute rfidBuf
    
    ////    Relations and components    ////
    
    SHM_Connection* itsSHM_Connection;		//## link itsSHM_Connection

public :

    //## operation executeOrder()
    void executeOrder();
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/Observer.h
*********************************************************************/
