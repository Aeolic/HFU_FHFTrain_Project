/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainTestCommunication
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestCommunication.cpp
*********************************************************************/

//## auto_generated
#include "TrainTestCommunication.h"
//## attribute client
#include "ClientSocket.h"
//## link itsTrainTestListenerThread
#include "TrainTestListenerThread.h"
//## operation TrainTestCommunication(TrainTestOrder*)
#include "TrainTestOrder.h"
//## link itsTrainTestSpeakerThread
#include "TrainTestSpeakerThread.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package TrainTest

//## class TrainTestCommunication
TrainTestCommunication::TrainTestCommunication(TrainTestOrder* trainTestOrder) : connected(false) {
    itsTrainTestSpeakerThread = NULL;
    itsTrainTestListenerThread = NULL;
    //#[ operation TrainTestCommunication(TrainTestOrder*)
    startClient();
    itsTrainTestOrder = trainTestOrder;
    itsTrainTestListenerThread = new TrainTestListenerThread(client, itsTrainTestOrder);
    itsTrainTestSpeakerThread = new TrainTestSpeakerThread(client);
    connected = true;
    start();
    //#]
}

TrainTestCommunication::TrainTestCommunication() : connected(false) {
    itsTrainTestListenerThread = NULL;
    itsTrainTestSpeakerThread = NULL;
}

TrainTestCommunication::~TrainTestCommunication() {
    cleanUpRelations();
}

OMReactive* TrainTestCommunication::execute() {
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

void TrainTestCommunication::sendPositionToPi(string position) {
    //#[ operation sendPositionToPi(string)
    while (!connected);
    itsTrainTestSpeakerThread->sendPositionToPi(position);
    //#]
}

void TrainTestCommunication::restartClient() {
    //#[ operation restartClient()
    connected = false;
    itsTrainTestListenerThread->closeThread();
    itsTrainTestSpeakerThread->closeThread();
    delete client;
    startClient();
    itsTrainTestListenerThread = new TrainTestListenerThread(client, itsTrainTestOrder);
    itsTrainTestSpeakerThread = new TrainTestSpeakerThread(client);
    connected = true;
    //#]
}

void TrainTestCommunication::startClient() {
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

bool TrainTestCommunication::getConnected() const {
    return connected;
}

void TrainTestCommunication::setConnected(bool p_connected) {
    connected = p_connected;
}

TrainTestOrder* TrainTestCommunication::getItsTrainTestOrder() const {
    return itsTrainTestOrder;
}

void TrainTestCommunication::setItsTrainTestOrder(TrainTestOrder* p_itsTrainTestOrder) {
    itsTrainTestOrder = p_itsTrainTestOrder;
}

TrainTestListenerThread* TrainTestCommunication::getItsTrainTestListenerThread() const {
    return itsTrainTestListenerThread;
}

void TrainTestCommunication::setItsTrainTestListenerThread(TrainTestListenerThread* p_TrainTestListenerThread) {
    itsTrainTestListenerThread = p_TrainTestListenerThread;
}

TrainTestSpeakerThread* TrainTestCommunication::getItsTrainTestSpeakerThread() const {
    return itsTrainTestSpeakerThread;
}

void TrainTestCommunication::setItsTrainTestSpeakerThread(TrainTestSpeakerThread* p_TrainTestSpeakerThread) {
    itsTrainTestSpeakerThread = p_TrainTestSpeakerThread;
}

void TrainTestCommunication::cleanUpRelations() {
    if(itsTrainTestListenerThread != NULL)
        {
            itsTrainTestListenerThread = NULL;
        }
    if(itsTrainTestSpeakerThread != NULL)
        {
            itsTrainTestSpeakerThread = NULL;
        }
}

ClientSocket* TrainTestCommunication::getClient() const {
    return client;
}

void TrainTestCommunication::setClient(ClientSocket* p_client) {
    client = p_client;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestCommunication.cpp
*********************************************************************/
