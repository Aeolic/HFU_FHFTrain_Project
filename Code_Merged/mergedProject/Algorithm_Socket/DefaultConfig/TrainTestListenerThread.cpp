/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainTestListenerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestListenerThread.cpp
*********************************************************************/

//## auto_generated
#include <iostream>
//## auto_generated
#include "TrainTestListenerThread.h"
//## operation TrainTestListenerThread(ClientSocket*,TrainTestOrder*)
#include "TrainTestOrder.h"
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package TrainTest

//## class TrainTestListenerThread
TrainTestListenerThread::TrainTestListenerThread(ClientSocket* client, TrainTestOrder* trainTestOrder) : close(false) {
    itsTrainTestOrder = NULL;
    //#[ operation TrainTestListenerThread(ClientSocket*,TrainTestOrder*)
    cout << "TrainListenerThread wurde gestartet." << endl;
    this->client = client;
    itsTrainTestOrder = trainTestOrder;
    start();
    //#]
}

TrainTestListenerThread::TrainTestListenerThread() : close(false) {
    itsTrainTestOrder = NULL;
}

TrainTestListenerThread::~TrainTestListenerThread() {
    cleanUpRelations();
}

void TrainTestListenerThread::closeThread() {
    //#[ operation closeThread()
    close = true;
    //#]
}

OMReactive* TrainTestListenerThread::execute() {
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
    				itsTrainTestOrder->newOrder(s_order);
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

TrainTestOrder* TrainTestListenerThread::getItsTrainTestOrder() const {
    return itsTrainTestOrder;
}

void TrainTestListenerThread::setItsTrainTestOrder(TrainTestOrder* p_TrainTestOrder) {
    itsTrainTestOrder = p_TrainTestOrder;
}

void TrainTestListenerThread::cleanUpRelations() {
    if(itsTrainTestOrder != NULL)
        {
            itsTrainTestOrder = NULL;
        }
}

ClientSocket* TrainTestListenerThread::getClient() const {
    return client;
}

void TrainTestListenerThread::setClient(ClientSocket* p_client) {
    client = p_client;
}

bool TrainTestListenerThread::getClose() const {
    return close;
}

void TrainTestListenerThread::setClose(bool p_close) {
    close = p_close;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestListenerThread.cpp
*********************************************************************/
