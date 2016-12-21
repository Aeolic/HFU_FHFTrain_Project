/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainListenerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainListenerThread.h
*********************************************************************/

#ifndef TrainListenerThread_H
#define TrainListenerThread_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## dependency ClientSocket
#include "ClientSocket.h"
//## dependency SocketException
#include "SocketException.h"
//## dependency string
#include <string.h>
//## dependency unistd
#include <unistd.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "TrainCommunicationPackage.h"
//## auto_generated
#include <oxf/omthread.h>
//## package TrainCommunicationPackage

//## class TrainListenerThread

using namespace std;

class TrainListenerThread : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    TrainListenerThread();
    
    //## auto_generated
    ~TrainListenerThread();
    
    ////    Operations    ////
    
    //## operation TrainListenerThread(ClientSocket*)
    TrainListenerThread(ClientSocket* client);
    
    //## operation closeThread()
    void closeThread();
    
    //## operation execute()
    OMReactive* execute();

private :

    //## auto_generated
    ClientSocket* getClient() const;
    
    //## auto_generated
    void setClient(ClientSocket* p_client);
    
    //## auto_generated
    bool getClose() const;
    
    //## auto_generated
    void setClose(bool p_close);

protected :

    ClientSocket* client;		//## attribute client
    
    bool close;		//## attribute close
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/TrainListenerThread.h
*********************************************************************/
