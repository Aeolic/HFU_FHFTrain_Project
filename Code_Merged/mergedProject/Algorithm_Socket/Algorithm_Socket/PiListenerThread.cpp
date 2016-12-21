/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: PiListenerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/PiListenerThread.cpp
*********************************************************************/

//## auto_generated
#include <iostream>
//## auto_generated
#include "PiListenerThread.h"
//## operation PiListenerThread(ServerSocket*,TrainPos*)
#include "ServerSocket.h"
//## operation PiListenerThread(ServerSocket*,TrainPos*)
#include "TrainPos.h"
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package Pi

//## class PiListenerThread
PiListenerThread::~PiListenerThread() {
    cleanUpRelations();
}

PiListenerThread::PiListenerThread() : close(false) {
    itsTrainPos = NULL;
}

OMReactive* PiListenerThread::execute() {
    //#[ operation execute()
    
    while (!close)
    {
    	try
    	{
    		cout << "Pi Listener gestartet" << endl;
    		while (true)
    		{
    				string s_order;
    				*new_sock >> s_order; 
    				cout << "   PI: Der Pi empfaengt etwas: " << endl;
    				cout << "   PI: Das habe ich empfangen: " << s_order << endl;   
    				
    				cout << "PiListenerThread: I am working with TrainPos with id: " << itsTrainPos->getPid() << endl;
    				itsTrainPos->updatePosition(s_order);
    			
    		}
    	}
    	catch (SocketException & e)
    	{
    		cout << "PiListener Main Exception: " << e.description() << endl;
    		sleep(1);
    	}
    }
    //#]
}

TrainPos* PiListenerThread::getItsTrainPos() const {
    return itsTrainPos;
}

void PiListenerThread::setItsTrainPos(TrainPos* p_TrainPos) {
    itsTrainPos = p_TrainPos;
}

void PiListenerThread::cleanUpRelations() {
    if(itsTrainPos != NULL)
        {
            itsTrainPos = NULL;
        }
}

ServerSocket* PiListenerThread::getNew_sock() const {
    return new_sock;
}

void PiListenerThread::setNew_sock(ServerSocket* p_new_sock) {
    new_sock = p_new_sock;
}

PiListenerThread::PiListenerThread(ServerSocket* new_sock, TrainPos* trainPos) : close(false) {
    itsTrainPos = NULL;
    //#[ operation PiListenerThread(ServerSocket*,TrainPos*)
    cout << "TrainListenerThread wurde gestartet." << endl;
    this->new_sock = new_sock;
    this->itsTrainPos = trainPos;
    start();
    //#]
}

void PiListenerThread::closeThread() {
    //#[ operation closeThread()
    close = true;
    //#]
}

bool PiListenerThread::getClose() const {
    return close;
}

void PiListenerThread::setClose(bool p_close) {
    close = p_close;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/PiListenerThread.cpp
*********************************************************************/
