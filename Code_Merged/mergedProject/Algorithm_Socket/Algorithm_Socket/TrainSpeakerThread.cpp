/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainSpeakerThread
//!	Generated Date	: Tue, 10, Jan 2017  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainSpeakerThread.cpp
*********************************************************************/

//## auto_generated
#include <iostream>
//## dependency ServerSocket
#include "ServerSocket.h"
//## dependency string
#include <string.h>
//## auto_generated
#include "TrainSpeakerThread.h"
//## operation TrainSpeakerThread(ClientSocket*)
#include "ClientSocket.h"
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package TrainCommunicationPackage

//## class TrainSpeakerThread
TrainSpeakerThread::TrainSpeakerThread(ClientSocket* client) : close(false) {
    //#[ operation TrainSpeakerThread(ClientSocket*)
                       cout << "TrainSpeakerThread wurde aufgerufen." << endl;   
                       this->client = client;
                       start();
                      	
                      	
    //#]
}

void TrainSpeakerThread::sendPositionToPi(std::string order) {
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

OMReactive* TrainSpeakerThread::execute() {
    //#[ operation execute()
    //#]
}

TrainSpeakerThread::TrainSpeakerThread() : close(false) {
}

TrainSpeakerThread::~TrainSpeakerThread() {
}

void TrainSpeakerThread::closeThread() {
    //#[ operation closeThread()
    close = true;
    //#]
}

ClientSocket* TrainSpeakerThread::getClient() const {
    return client;
}

void TrainSpeakerThread::setClient(ClientSocket* p_client) {
    client = p_client;
}

bool TrainSpeakerThread::getClose() const {
    return close;
}

void TrainSpeakerThread::setClose(bool p_close) {
    close = p_close;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainSpeakerThread.cpp
*********************************************************************/
