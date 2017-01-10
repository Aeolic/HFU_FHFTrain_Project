/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainThread
//!	Generated Date	: Tue, 10, Jan 2017  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainThread.cpp
*********************************************************************/

//## auto_generated
#include "TrainThread.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## attribute client
#include "ClientSocket.h"
//## link itsSHM_Connection
#include "SHM_Connection.h"
//## link itsTrainCommunication
#include "TrainCommunication.h"
//## package TrainCommunicationPackage

//## class TrainThread
TrainThread::TrainThread() {
    itsSHM_Connection = NULL;
    itsTrainCommunication = NULL;
    //#[ operation TrainThread()
                   
    cout << "ZUG ERSTELLT." << endl;
    itsTrainCommunication = new TrainCommunication();
    start();
    //#]
}

TrainThread::~TrainThread() {
    cleanUpRelations();
}

OMReactive* TrainThread::execute() {
    //#[ operation execute()
    int i = 0;  
    float oldTag = -5.0;
    float lTag=-5.0;  
    itsSHM_Connection->read(LastTag,oldTag,true);
    while(true)
    {    
        itsSHM_Connection->read(LastTag,lTag,true);
    	if(lTag!=oldTag){   
    	ostringstream ss;
    	ss<<lTag;
    	string s(ss.str());
    		itsTrainCommunication->sendPositionToPi(s);
    		oldTag=lTag;
    		}
    		
    	usleep(200000);
    	  
    }
    //#]
}

void TrainThread::startClient() {
    //#[ operation startClient()
    bool error;
    do
    {
    	try
    	{
    		error = false;
    		client = new ClientSocket("localhost", 35035);
    	}
    	catch (SocketException& e)
    	{   
    		error = true;
    		cout << "startClient exception: " << e.description() << endl;
    		sleep(1);
    	}
    	catch (...)
    	{   
    		error = true;
    	 	cout << "startClient unexpected exception" << endl;
    	 	sleep(1);
    	}
    } while (error);
    //#]
}

SHM_Connection* TrainThread::getItsSHM_Connection() const {
    return itsSHM_Connection;
}

void TrainThread::setItsSHM_Connection(SHM_Connection* p_SHM_Connection) {
    itsSHM_Connection = p_SHM_Connection;
}

TrainCommunication* TrainThread::getItsTrainCommunication() const {
    return itsTrainCommunication;
}

void TrainThread::setItsTrainCommunication(TrainCommunication* p_TrainCommunication) {
    itsTrainCommunication = p_TrainCommunication;
}

void TrainThread::cleanUpRelations() {
    if(itsSHM_Connection != NULL)
        {
            itsSHM_Connection = NULL;
        }
    if(itsTrainCommunication != NULL)
        {
            itsTrainCommunication = NULL;
        }
}

ClientSocket* TrainThread::getClient() const {
    return client;
}

void TrainThread::setClient(ClientSocket* p_client) {
    client = p_client;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainThread.cpp
*********************************************************************/
