/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainThread
//!	Generated Date	: Tue, 10, Jan 2017  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainThread.h
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

//## link itsSHM_Connection
class SHM_Connection;

//## link itsTrainCommunication
class TrainCommunication;

//## dependency std
using namespace std;

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
    SHM_Connection* getItsSHM_Connection() const;
    
    //## auto_generated
    void setItsSHM_Connection(SHM_Connection* p_SHM_Connection);
    
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
    
    SHM_Connection* itsSHM_Connection;		//## link itsSHM_Connection
    
    TrainCommunication* itsTrainCommunication;		//## link itsTrainCommunication
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainThread.h
*********************************************************************/
