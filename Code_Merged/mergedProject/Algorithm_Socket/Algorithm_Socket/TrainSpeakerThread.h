/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainSpeakerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainSpeakerThread.h
*********************************************************************/

#ifndef TrainSpeakerThread_H
#define TrainSpeakerThread_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "TrainCommunicationPackage.h"
//## operation TrainSpeakerThread(ClientSocket*)
class ClientSocket;

//## dependency ServerSocket
class ServerSocket;

//class ServerSocket;

//## package TrainCommunicationPackage

//## class TrainSpeakerThread

using namespace std;

class TrainSpeakerThread : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation TrainSpeakerThread(ClientSocket*)
    TrainSpeakerThread(ClientSocket* client);
    
    ////    Operations    ////
    
    //## operation sendPositionToPi(std::string)
    void sendPositionToPi(std::string order);
    
    //## operation execute()
    OMReactive* execute();
    
    //## auto_generated
    TrainSpeakerThread();
    
    //## auto_generated
    ~TrainSpeakerThread();
    
    //## operation closeThread()
    void closeThread();

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
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainSpeakerThread.h
*********************************************************************/
