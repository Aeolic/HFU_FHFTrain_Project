/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Console_T 
	Configuration 	: Console_T
	Model Element	: Rfid_Main
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Console_T/Console_T/Rfid_Main.h
*********************************************************************/

#ifndef Rfid_Main_H
#define Rfid_Main_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Common.h"
//## link itsObserver
class Observer;

//## link itsRfidReader
class RfidReader;

//## link itsSHM_Connection
class SHM_Connection;

//## package Common

//## class Rfid_Main
class Rfid_Main {
    ////    Constructors and destructors    ////
    
public :

    //## operation Rfid_Main()
    Rfid_Main();
    
    //## auto_generated
    ~Rfid_Main();
    
    ////    Additional operations    ////
    
    //## auto_generated
    char getRfidBuf(int i1) const;
    
    //## auto_generated
    void setRfidBuf(int i1, char p_rfidBuf);
    
    //## auto_generated
    char getRfidBufOld(int i1) const;
    
    //## auto_generated
    void setRfidBufOld(int i1, char p_rfidBufOld);
    
    //## auto_generated
    Observer* getItsObserver() const;
    
    //## auto_generated
    void setItsObserver(Observer* p_Observer);
    
    //## auto_generated
    RfidReader* getItsRfidReader() const;
    
    //## auto_generated
    void setItsRfidReader(RfidReader* p_RfidReader);
    
    //## auto_generated
    SHM_Connection* getItsSHM_Connection() const;
    
    //## auto_generated
    void setItsSHM_Connection(SHM_Connection* p_SHM_Connection);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    char rfidBuf[15];		//## attribute rfidBuf
    
    char rfidBufOld[15];		//## attribute rfidBufOld
    
    ////    Relations and components    ////
    
    Observer* itsObserver;		//## link itsObserver
    
    RfidReader* itsRfidReader;		//## link itsRfidReader
    
    SHM_Connection* itsSHM_Connection;		//## link itsSHM_Connection
};

#endif
/*********************************************************************
	File Path	: Console_T/Console_T/Rfid_Main.h
*********************************************************************/
