/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainTestListenerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestListenerThread.h
*********************************************************************/

#ifndef TrainTestListenerThread_H
#define TrainTestListenerThread_H

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
#include <oxf/omthread.h>
//## operation TrainTestListenerThread(ClientSocket*,TrainTestOrder*)
class TrainTestOrder;

//## package TrainTest

//## class TrainTestListenerThread

using namespace std;

class TrainTestListenerThread : public OMThread {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation TrainTestListenerThread(ClientSocket*,TrainTestOrder*)
    TrainTestListenerThread(ClientSocket* client, TrainTestOrder* trainTestOrder);
    
    //## auto_generated
    TrainTestListenerThread();
    
    //## auto_generated
    ~TrainTestListenerThread();
    
    //## operation closeThread()
    void closeThread();
    
    //## operation execute()
    OMReactive* execute();
    
    //## auto_generated
    TrainTestOrder* getItsTrainTestOrder() const;
    
    //## auto_generated
    void setItsTrainTestOrder(TrainTestOrder* p_TrainTestOrder);

protected :

    //## auto_generated
    void cleanUpRelations();

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
    
    TrainTestOrder* itsTrainTestOrder;		//## link itsTrainTestOrder
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestListenerThread.h
*********************************************************************/
