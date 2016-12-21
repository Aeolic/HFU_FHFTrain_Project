/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainTestSpeakerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestSpeakerThread.h
*********************************************************************/

#ifndef TrainTestSpeakerThread_H
#define TrainTestSpeakerThread_H

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
//## operation TrainTestSpeakerThread(ClientSocket*)
class ClientSocket;

//## dependency ServerSocket
class ServerSocket;

//class ServerSocket;

//## package TrainTest

//## class TrainTestSpeakerThread

using namespace std;

class TrainTestSpeakerThread : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation TrainTestSpeakerThread(ClientSocket*)
    TrainTestSpeakerThread(ClientSocket* client);
    
    ////    Operations    ////
    
    //## operation sendPositionToPi(std::string)
    void sendPositionToPi(std::string order);
    
    //## operation execute()
    OMReactive* execute();
    
    //## auto_generated
    TrainTestSpeakerThread();
    
    //## auto_generated
    ~TrainTestSpeakerThread();
    
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
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestSpeakerThread.h
*********************************************************************/
