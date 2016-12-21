/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Communication
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/Communication.cpp
*********************************************************************/

//## auto_generated
#include "Communication.h"
//## link itsPiListenerThread
#include "PiListenerThread.h"
//## link itsPiSpeakerThread
#include "PiSpeakerThread.h"
//## attribute new_sock
#include "ServerSocket.h"
//## operation Communication(TrainPos*)
#include "TrainPos.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package Pi

//## class Communication
Communication::Communication(TrainPos* itsTrainPos) : client_accepted(false) {
    itsPiSpeakerThread = NULL;
    itsPiListenerThread = NULL;
    //#[ operation Communication(TrainPos*)
    // Save pointer to train position
    trainPos = itsTrainPos;
    
    // Start server and accept for first time
    bool error;
    do
    {
    	try
    	{   
    		error = false;
    		server = new ServerSocket(35035);
    		std::cout << "Pi Server mit Port 35035 gestartet." << std::endl;
    		new_sock = new ServerSocket();
    		server->accept(*new_sock);
    		itsPiSpeakerThread = new PiSpeakerThread(new_sock);
    		itsPiListenerThread = new PiListenerThread(new_sock, trainPos);
    	}
    	catch (SocketException& e)
    	{
    		cout << "Error in Communication Constructor: " << e.description() << endl;
    		error = true;
    		sleep(1);
    	}
    	catch (...)
    	{
    	    cout << "Unexpected Error in Communication Constructor" << endl;
    	}
    } while (error);
    client_accepted = true;
    start();
    //#]
}

Communication::Communication() : client_accepted(false) {
    itsPiListenerThread = NULL;
    itsPiSpeakerThread = NULL;
}

Communication::~Communication() {
    cleanUpRelations();
}

OMReactive* Communication::execute() {
    //#[ operation execute()
    while(true)
    {   
    	try
    	{
    		new_sock = new ServerSocket();
    		server->accept(*new_sock);
    		cout << "Accepted" << endl;
    		client_accepted = false;
    		itsPiSpeakerThread->closeThread();
    		itsPiListenerThread->closeThread();
    		itsPiSpeakerThread = new PiSpeakerThread(new_sock);
    		itsPiListenerThread = new PiListenerThread(new_sock, trainPos);
    		client_accepted = true;
    	}
    	catch (SocketException& e)
    	{
    	    cout << "Communication Error in Communication Thread's execute(): " << e.description() << endl;
    	}
    	catch (...)
    	{
    	 	cout << "Unexpected error in Communication Thread's execute()" << endl;
    	}
    }
    //#]
}

void Communication::sendOrder(string order) {
    //#[ operation sendOrder(string)
    cout << "Client Accepted: " << client_accepted << endl;
    while (!client_accepted);
    itsPiSpeakerThread->sendOrderToTrain(order); 
    cout << " Communication sendOrder" << endl; // can be deleted
    //#]
}

bool Communication::getClient_accepted() const {
    return client_accepted;
}

void Communication::setClient_accepted(bool p_client_accepted) {
    client_accepted = p_client_accepted;
}

ServerSocket* Communication::getNew_sock() const {
    return new_sock;
}

void Communication::setNew_sock(ServerSocket* p_new_sock) {
    new_sock = p_new_sock;
}

ServerSocket* Communication::getServer() const {
    return server;
}

void Communication::setServer(ServerSocket* p_server) {
    server = p_server;
}

TrainPos* Communication::getTrainPos() const {
    return trainPos;
}

void Communication::setTrainPos(TrainPos* p_trainPos) {
    trainPos = p_trainPos;
}

PiListenerThread* Communication::getItsPiListenerThread() const {
    return itsPiListenerThread;
}

void Communication::setItsPiListenerThread(PiListenerThread* p_PiListenerThread) {
    itsPiListenerThread = p_PiListenerThread;
}

PiSpeakerThread* Communication::getItsPiSpeakerThread() const {
    return itsPiSpeakerThread;
}

void Communication::setItsPiSpeakerThread(PiSpeakerThread* p_PiSpeakerThread) {
    itsPiSpeakerThread = p_PiSpeakerThread;
}

void Communication::cleanUpRelations() {
    if(itsPiListenerThread != NULL)
        {
            itsPiListenerThread = NULL;
        }
    if(itsPiSpeakerThread != NULL)
        {
            itsPiSpeakerThread = NULL;
        }
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/Communication.cpp
*********************************************************************/
