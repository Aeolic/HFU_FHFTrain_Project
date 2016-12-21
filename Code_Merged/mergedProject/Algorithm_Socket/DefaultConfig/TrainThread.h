/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainThread.h
*********************************************************************/

#ifndef TrainThread_H
#define TrainThread_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "TrainCommunicationPackage.h"
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <sstream>
//## attribute client
class ClientSocket;

//## link itsTrainCommunication
class TrainCommunication;

//## package TrainCommunicationPackage

//## class TrainThread

using namespace std;

class TrainThread : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation TrainThread()
    TrainThread();
    
    //## auto_generated
    ~TrainThread();
    
    ////    Operations    ////
    
    //## operation execute()
    OMReactive* execute();

private :

    //## operation startClient()
    void startClient();
    
    ////    Additional operations    ////

public :

    //## auto_generated
    TrainCommunication* getItsTrainCommunication() const;
    
    //## auto_generated
    void setItsTrainCommunication(TrainCommunication* p_TrainCommunication);

protected :

    //## auto_generated
    void cleanUpRelations();

private :

    //## auto_generated
    ClientSocket* getClient() const;
    
    //## auto_generated
    void setClient(ClientSocket* p_client);
    
    ////    Attributes    ////

protected :

    ClientSocket* client;		//## attribute client
    
    ////    Relations and components    ////
    
    TrainCommunication* itsTrainCommunication;		//## link itsTrainCommunication
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/TrainThread.h
*********************************************************************/
