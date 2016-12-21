/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainTestSpeakerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestSpeakerThread.cpp
*********************************************************************/

//## auto_generated
#include <iostream>
//## dependency ServerSocket
#include "ServerSocket.h"
//## dependency string
#include <string.h>
//## auto_generated
#include "TrainTestSpeakerThread.h"
//## operation TrainTestSpeakerThread(ClientSocket*)
#include "ClientSocket.h"
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package TrainTest

//## class TrainTestSpeakerThread
TrainTestSpeakerThread::TrainTestSpeakerThread(ClientSocket* client) : close(false) {
    //#[ operation TrainTestSpeakerThread(ClientSocket*)
                       cout << "TrainSpeakerThread wurde aufgerufen." << endl;   
                       this->client = client;
                       start();
                      	
                      	
    //#]
}

void TrainTestSpeakerThread::sendPositionToPi(std::string order) {
    //#[ operation sendPositionToPi(std::string)
    bool error;
    string s;  
    do
    {
    	try
    	{   
    		std::cout << "Versuche '" + order + "' zu senden." << std::endl;
    		error = false;
    		*client << order;
    	}
    	catch (SocketException& e)
    	{
    		error = true;
    		std::cout << e.description() << std::endl;
    		client->setConnected(false);
    		break;
    	}
    	catch (...)
    	{
    	    std::cout << "Unexpected Error" << std::endl;
    	}
    }
    while (error);
    //#]
}

OMReactive* TrainTestSpeakerThread::execute() {
    //#[ operation execute()
    //#]
}

TrainTestSpeakerThread::TrainTestSpeakerThread() : close(false) {
}

TrainTestSpeakerThread::~TrainTestSpeakerThread() {
}

void TrainTestSpeakerThread::closeThread() {
    //#[ operation closeThread()
    close = true;
    //#]
}

ClientSocket* TrainTestSpeakerThread::getClient() const {
    return client;
}

void TrainTestSpeakerThread::setClient(ClientSocket* p_client) {
    client = p_client;
}

bool TrainTestSpeakerThread::getClose() const {
    return close;
}

void TrainTestSpeakerThread::setClose(bool p_close) {
    close = p_close;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestSpeakerThread.cpp
*********************************************************************/
