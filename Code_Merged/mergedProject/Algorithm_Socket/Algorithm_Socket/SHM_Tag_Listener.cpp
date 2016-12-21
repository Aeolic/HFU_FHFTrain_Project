/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: SHM_Tag_Listener
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/SHM_Tag_Listener.cpp
*********************************************************************/

//## auto_generated
#include "SHM_Tag_Listener.h"
//## link itsSHM_Connection
#include "SHM_Connection.h"
//## link itsTrainCommunication
#include "TrainCommunication.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package TrainCommunicationPackage

//## class SHM_Tag_Listener
SHM_Tag_Listener::SHM_Tag_Listener() {
    itsSHM_Connection = NULL;
    itsTrainCommunication = NULL;
    //#[ operation SHM_Tag_Listener()
                     start();
    //#]
}

SHM_Tag_Listener::~SHM_Tag_Listener() {
    cleanUpRelations();
}

OMReactive* SHM_Tag_Listener::execute() {
    //#[ operation execute()
                   while(true){
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   
                   }
    //#]
}

SHM_Connection* SHM_Tag_Listener::getItsSHM_Connection() const {
    return itsSHM_Connection;
}

void SHM_Tag_Listener::setItsSHM_Connection(SHM_Connection* p_SHM_Connection) {
    itsSHM_Connection = p_SHM_Connection;
}

TrainCommunication* SHM_Tag_Listener::getItsTrainCommunication() const {
    return itsTrainCommunication;
}

void SHM_Tag_Listener::setItsTrainCommunication(TrainCommunication* p_TrainCommunication) {
    if(p_TrainCommunication != NULL)
        {
            p_TrainCommunication->_setItsSHM_Tag_Listener_1(this);
        }
    _setItsTrainCommunication(p_TrainCommunication);
}

void SHM_Tag_Listener::cleanUpRelations() {
    if(itsSHM_Connection != NULL)
        {
            itsSHM_Connection = NULL;
        }
    if(itsTrainCommunication != NULL)
        {
            SHM_Tag_Listener* p_SHM_Tag_Listener = itsTrainCommunication->getItsSHM_Tag_Listener_1();
            if(p_SHM_Tag_Listener != NULL)
                {
                    itsTrainCommunication->__setItsSHM_Tag_Listener_1(NULL);
                }
            itsTrainCommunication = NULL;
        }
}

void SHM_Tag_Listener::__setItsTrainCommunication(TrainCommunication* p_TrainCommunication) {
    itsTrainCommunication = p_TrainCommunication;
}

void SHM_Tag_Listener::_setItsTrainCommunication(TrainCommunication* p_TrainCommunication) {
    if(itsTrainCommunication != NULL)
        {
            itsTrainCommunication->__setItsSHM_Tag_Listener_1(NULL);
        }
    __setItsTrainCommunication(p_TrainCommunication);
}

void SHM_Tag_Listener::_clearItsTrainCommunication() {
    itsTrainCommunication = NULL;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/SHM_Tag_Listener.cpp
*********************************************************************/
