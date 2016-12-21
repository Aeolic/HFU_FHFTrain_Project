/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainCommunication
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainCommunication.cpp
*********************************************************************/

//## auto_generated
#include "TrainCommunication.h"
//## attribute client
#include "ClientSocket.h"
//## link itsTrainListenerThread
#include "TrainListenerThread.h"
//## link itsTrainSpeakerThread
#include "TrainSpeakerThread.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package TrainCommunicationPackage

//## class TrainCommunication
TrainCommunication::TrainCommunication() : connected(false) {
    itsTrainListenerThread = NULL;
    itsTrainSpeakerThread = NULL;
    //#[ operation TrainCommunication()
    startClient();
    itsTrainListenerThread = new TrainListenerThread(client);
    itsTrainSpeakerThread = new TrainSpeakerThread(client);
    connected = true;
    start();
    //#]
}

TrainCommunication::~TrainCommunication() {
    cleanUpRelations();
}

OMReactive* TrainCommunication::execute() {
    //#[ operation execute()
    while (true)
    {
    	if (!(client->getConnected()))
    	{
    	 	restartClient();
    	}
    	sleep(1);
    }
    //#]
}

void TrainCommunication::sendPositionToPi(string position) {
    //#[ operation sendPositionToPi(string)
    while (!connected);
    itsTrainSpeakerThread->sendPositionToPi(position);
    //#]
}

void TrainCommunication::restartClient() {
    //#[ operation restartClient()
    connected = false;
    itsTrainListenerThread->closeThread();
    itsTrainSpeakerThread->closeThread();
    delete client;
    startClient();
    itsTrainListenerThread = new TrainListenerThread(client);
    itsTrainSpeakerThread = new TrainSpeakerThread(client);
    connected = true;
    //#]
}

void TrainCommunication::startClient() {
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

bool TrainCommunication::getConnected() const {
    return connected;
}

void TrainCommunication::setConnected(bool p_connected) {
    connected = p_connected;
}

TrainListenerThread* TrainCommunication::getItsTrainListenerThread() const {
    return itsTrainListenerThread;
}

void TrainCommunication::setItsTrainListenerThread(TrainListenerThread* p_TrainListenerThread) {
    itsTrainListenerThread = p_TrainListenerThread;
}

TrainSpeakerThread* TrainCommunication::getItsTrainSpeakerThread() const {
    return itsTrainSpeakerThread;
}

void TrainCommunication::setItsTrainSpeakerThread(TrainSpeakerThread* p_TrainSpeakerThread) {
    itsTrainSpeakerThread = p_TrainSpeakerThread;
}

void TrainCommunication::cleanUpRelations() {
    if(itsTrainListenerThread != NULL)
        {
            itsTrainListenerThread = NULL;
        }
    if(itsTrainSpeakerThread != NULL)
        {
            itsTrainSpeakerThread = NULL;
        }
}

ClientSocket* TrainCommunication::getClient() const {
    return client;
}

void TrainCommunication::setClient(ClientSocket* p_client) {
    client = p_client;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/TrainCommunication.cpp
*********************************************************************/
