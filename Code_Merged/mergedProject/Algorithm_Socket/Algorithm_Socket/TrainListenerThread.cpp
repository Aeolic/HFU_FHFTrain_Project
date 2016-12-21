/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainListenerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainListenerThread.cpp
*********************************************************************/

//## auto_generated
#include "TrainListenerThread.h"
//## auto_generated
#include <iostream>
//## link itsSHM_Connection
#include "SHM_Connection.h"
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package TrainCommunicationPackage

//## class TrainListenerThread
TrainListenerThread::TrainListenerThread() : close(false) {
    itsSHM_Connection = NULL;
}

TrainListenerThread::~TrainListenerThread() {
    cleanUpRelations();
}

TrainListenerThread::TrainListenerThread(ClientSocket* client) : close(false) {
    itsSHM_Connection = NULL;
    //#[ operation TrainListenerThread(ClientSocket*)
    cout << "TrainListenerThread wurde gestartet." << endl;
    this->client = client;
      itsSHM_Connection = SHM_Connection::instance();
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
    				newOrder(s_order);
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

SHM_Connection* TrainListenerThread::getItsSHM_Connection() const {
    return itsSHM_Connection;
}

void TrainListenerThread::setItsSHM_Connection(SHM_Connection* p_SHM_Connection) {
    itsSHM_Connection = p_SHM_Connection;
}

void TrainListenerThread::cleanUpRelations() {
    if(itsSHM_Connection != NULL)
        {
            itsSHM_Connection = NULL;
        }
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

void TrainListenerThread::newOrder(string order) {
    //#[ operation newOrder(string)
    
    string subOrder = order.substr(1, order.length() - 2);
    float beforeSpeed = atoi(subOrder.substr(0, subOrder.find(",")).c_str());
    itsSHM_Connection->save(BeforeSpeed,30*beforeSpeed); 
    itsSHM_Connection->save(Speed,30*beforeSpeed);  
    subOrder.erase(0, subOrder.find(",") + 1);
    float tag = atof(subOrder.substr(0, subOrder.find(",")).c_str());
    itsSHM_Connection->save(TagUntil,tag);  
    subOrder.erase(0, subOrder.find(",") + 1);
    float afterSpeed = atoi(subOrder.c_str());
    itsSHM_Connection->save(AfterSpeed,30*afterSpeed);  
    
    
    
    //#]
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainListenerThread.cpp
*********************************************************************/
