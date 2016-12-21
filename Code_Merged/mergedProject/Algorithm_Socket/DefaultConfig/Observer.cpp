/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: Observer
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/Observer.cpp
*********************************************************************/

//## auto_generated
#include "Observer.h"
//## link itsSHM_Connection
#include "SHM_Connection.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package Common

//## class Observer
Observer::Observer() {
    itsSHM_Connection = NULL;
    //#[ operation Observer()
    itsSHM_Connection = SHM_Connection::instance();
    //#]
}

Observer::~Observer() {
    cleanUpRelations();
}

void Observer::notify(char* rfidCode) {
    //#[ operation notify(char*)
    std::cout << "Got RFID-Code: " << rfidCode << std::endl;
    if(strcmp(rfidCode, "HB181EE14") == 0){
     	itsSHM_Connection->save(Speed, 35.0);
    }       
    else if(strcmp(rfidCode, "H0883EE14") == 0){
     	itsSHM_Connection->save(Speed, 35.0);
    }
    else if(strcmp(rfidCode, "HB283EE14") == 0){   
    	itsSHM_Connection->read(Speed, pwr);
     	itsSHM_Connection->save(Speed, pwr*0.66);
    }      
    else if(strcmp(rfidCode, "H5D82EE14") == 0){   
    	itsSHM_Connection->read(Speed, pwr);
     	itsSHM_Connection->save(Speed, pwr*0.66);
    }                
    else if(strcmp(rfidCode, "HF784EE14") == 0){
    	itsSHM_Connection->read(Speed, pwr);
     	itsSHM_Connection->save(Speed, pwr*1.33);
    }      
    else if(strcmp(rfidCode, "HB881EE14") == 0){
    	itsSHM_Connection->read(Speed, pwr);
     	itsSHM_Connection->save(Speed, pwr*1.33);
    }                  
    else if(strcmp(rfidCode, "H5084EE14") == 0){
     	itsSHM_Connection->save(Speed, 25.0);
    }   
    else if(strcmp(rfidCode, "H1281EE14") == 0){
     	itsSHM_Connection->save(Speed, -25.0);
    }  
    else if(strcmp(rfidCode, "H91FF9815") == 0){
     	itsSHM_Connection->save(Speed, -35.0);
    }
    else if(strcmp(rfidCode, "H8B85EE14") == 0){
     	itsSHM_Connection->save(Speed, 0.0);
    }  
    else {
     	printf("Unknown RFID-Code! '%s'\n", rfidCode);
    }
    //#]
}

float Observer::getPwr() const {
    return pwr;
}

void Observer::setPwr(float p_pwr) {
    pwr = p_pwr;
}

char Observer::getRfidBuf(int i1) const {
    return rfidBuf[i1];
}

void Observer::setRfidBuf(int i1, char p_rfidBuf) {
    rfidBuf[i1] = p_rfidBuf;
}

SHM_Connection* Observer::getItsSHM_Connection() const {
    return itsSHM_Connection;
}

void Observer::setItsSHM_Connection(SHM_Connection* p_SHM_Connection) {
    itsSHM_Connection = p_SHM_Connection;
}

void Observer::cleanUpRelations() {
    if(itsSHM_Connection != NULL)
        {
            itsSHM_Connection = NULL;
        }
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/Observer.cpp
*********************************************************************/
