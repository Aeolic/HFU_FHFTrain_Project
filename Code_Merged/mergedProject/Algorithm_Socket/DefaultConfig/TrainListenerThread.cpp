/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainListenerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainListenerThread.cpp
*********************************************************************/

//## auto_generated
#include "TrainListenerThread.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package TrainCommunicationPackage

//## class TrainListenerThread
TrainListenerThread::TrainListenerThread() : close(false) {
}

TrainListenerThread::~TrainListenerThread() {
}

TrainListenerThread::TrainListenerThread(ClientSocket* client) : close(false) {
    //#[ operation TrainListenerThread(ClientSocket*)
    cout << "TrainListenerThread wurde gestartet." << endl;
    this->client = client;
    start();
    //#]
}

void TrainListenerThread::closeThread() {
    //#[ operation closeThread()
    close = true;
    //#]
}

OMReactive* TrainListenerThread::execute() {
    //#[ operation execute()
    //#[ operation main()
    while (!close)
    {
    	try
    	{
    		cout << "Train Listener gestartet" << endl;
    		while (true)
    		{
    				string s_order;
    				*client >> s_order; 
    				cout << "   ZUG: Der Zug empfaengt etwas: " << endl;
    				cout << "   ZUG: Das habe ich empfangen: " << s_order << endl;
    		}
    	}
    	catch (SocketException & e)
    	{
    		cout << "TrainListener Main Exception: " << e.description() << endl;
    		client->setConnected(false);
    		break;
    	}
    }
    return 0;
    //#]
}

ClientSocket* TrainListenerThread::getClient() const {
    return client;
}

void TrainListenerThread::setClient(ClientSocket* p_client) {
    client = p_client;
}

bool TrainListenerThread::getClose() const {
    return close;
}

void TrainListenerThread::setClose(bool p_close) {
    close = p_close;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/TrainListenerThread.cpp
*********************************************************************/
