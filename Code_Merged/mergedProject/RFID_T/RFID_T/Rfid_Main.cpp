/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: RFID_T 
	Configuration 	: RFID_T
	Model Element	: Rfid_Main
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: RFID_T/RFID_T/Rfid_Main.cpp
*********************************************************************/

//## auto_generated
#include "Rfid_Main.h"
//## link itsObserver
#include "Observer.h"
//## link itsRfidReader
#include "RfidReader.h"
//## link itsSHM_Connection
#include "SHM_Connection.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <unistd.h>
//## auto_generated
#include <termios.h>
//## auto_generated
#include <string.h>
//## auto_generated
#include <sys/stat.h>
//## auto_generated
#include <fcntl.h>
//## auto_generated
#include <stdio.h>
//## auto_generated
#include <stdlib.h>
//## package Common

//## class Rfid_Main
Rfid_Main::Rfid_Main() {
    itsObserver = NULL;
    itsRfidReader = NULL;
    itsSHM_Connection = NULL;
    //#[ operation Rfid_Main()
    
    printf("Starte Main\n");
    
    itsRfidReader = new RfidReader();
    itsObserver = new Observer();   
    itsSHM_Connection = SHM_Connection::instance(); 
    
    itsRfidReader->RegisterListener(itsObserver);       
    
    	int fd;
    	itsRfidReader->openPort(&fd);
    
    	while(1) {     
    		if(itsRfidReader->readCard(fd, rfidBuf) == -1){
    			continue;
    		}    
    //		std::cout << "new: "<< rfidBuf  << " old: "<< rfidBufOld << std::endl;
    		if(strcmp(rfidBuf, rfidBufOld) != 0){
    			strncpy(rfidBufOld, rfidBuf,sizeof(rfidBuf));
    		//	std::cout << rfidBuf;
    			itsSHM_Connection->save(Rfid, rfidBuf);
    			itsRfidReader->notifyObservers(rfidBuf);   
    		}
    	}
    	close(fd);
    //#]
}

Rfid_Main::~Rfid_Main() {
    cleanUpRelations();
}

char Rfid_Main::getRfidBuf(int i1) const {
    return rfidBuf[i1];
}

void Rfid_Main::setRfidBuf(int i1, char p_rfidBuf) {
    rfidBuf[i1] = p_rfidBuf;
}

char Rfid_Main::getRfidBufOld(int i1) const {
    return rfidBufOld[i1];
}

void Rfid_Main::setRfidBufOld(int i1, char p_rfidBufOld) {
    rfidBufOld[i1] = p_rfidBufOld;
}

Observer* Rfid_Main::getItsObserver() const {
    return itsObserver;
}

void Rfid_Main::setItsObserver(Observer* p_Observer) {
    itsObserver = p_Observer;
}

RfidReader* Rfid_Main::getItsRfidReader() const {
    return itsRfidReader;
}

void Rfid_Main::setItsRfidReader(RfidReader* p_RfidReader) {
    itsRfidReader = p_RfidReader;
}

SHM_Connection* Rfid_Main::getItsSHM_Connection() const {
    return itsSHM_Connection;
}

void Rfid_Main::setItsSHM_Connection(SHM_Connection* p_SHM_Connection) {
    itsSHM_Connection = p_SHM_Connection;
}

void Rfid_Main::cleanUpRelations() {
    if(itsObserver != NULL)
        {
            itsObserver = NULL;
        }
    if(itsRfidReader != NULL)
        {
            itsRfidReader = NULL;
        }
    if(itsSHM_Connection != NULL)
        {
            itsSHM_Connection = NULL;
        }
}

/*********************************************************************
	File Path	: RFID_T/RFID_T/Rfid_Main.cpp
*********************************************************************/
