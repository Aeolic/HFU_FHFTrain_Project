/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: PiSpeakerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/PiSpeakerThread.cpp
*********************************************************************/

//## auto_generated
#include "PiSpeakerThread.h"
//## auto_generated
#include <iostream>
//## dependency ServerSocket
#include "ServerSocket.h"
//## dependency string
#include <string.h>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package Pi

//## class PiSpeakerThread
PiSpeakerThread::PiSpeakerThread(ServerSocket* new_sock) : close(false) {
    //#[ operation PiSpeakerThread(ServerSocket*)
    cout << "PiSpeakerThread wurde aufgerufen." << endl;   
    this->new_sock = new_sock;
    start();
                      	
    
    //#]
}

PiSpeakerThread::PiSpeakerThread() : close(false) {
}

PiSpeakerThread::~PiSpeakerThread() {
}

void PiSpeakerThread::sendOrderToTrain(std::string order) {
    //#[ operation sendOrderToTrain(std::string)
    bool error;
    string s; //to delete?  
    do
    {
    	try
    	{  
    		std::cout << "Versuche '" + order + "' zu senden." << std::endl;
    		error = false;
    		*new_sock << order;
    	}
    	catch (SocketException& e)
    	{
    		error = true;
    		std::cout << e.description() << std::endl;
    		exit(0);
    		sleep(1);
    	}
    	catch (...)
    	{
    	    std::cout << "Unexpected Error" << std::endl;
    	}
    }
    while (error);
    //#]
}

OMReactive* PiSpeakerThread::execute() {
    //#[ operation execute()
    //#]
}

void PiSpeakerThread::closeThread() {
    //#[ operation closeThread()
    close = true;
    //#]
}

bool PiSpeakerThread::getClose() const {
    return close;
}

void PiSpeakerThread::setClose(bool p_close) {
    close = p_close;
}

ServerSocket* PiSpeakerThread::getNew_sock() const {
    return new_sock;
}

void PiSpeakerThread::setNew_sock(ServerSocket* p_new_sock) {
    new_sock = p_new_sock;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/PiSpeakerThread.cpp
*********************************************************************/
