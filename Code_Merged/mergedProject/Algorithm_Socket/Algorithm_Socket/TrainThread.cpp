/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainThread.cpp
*********************************************************************/

//## auto_generated
#include "TrainThread.h"
//## attribute client
#include "ClientSocket.h"
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

//## class TrainThread
TrainThread::TrainThread() {
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
    while(true)
    {
    	stringstream ss;
    	ss << i++;
    	itsTrainCommunication->sendPositionToPi(ss.str());
    	sleep(1);  
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

TrainCommunication* TrainThread::getItsTrainCommunication() const {
    return itsTrainCommunication;
}

void TrainThread::setItsTrainCommunication(TrainCommunication* p_TrainCommunication) {
    itsTrainCommunication = p_TrainCommunication;
}

void TrainThread::cleanUpRelations() {
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
