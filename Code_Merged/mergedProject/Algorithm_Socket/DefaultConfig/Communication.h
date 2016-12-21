/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: Communication
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/Communication.h
*********************************************************************/

#ifndef Communication_H
#define Communication_H

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
#include <oxf/omthread.h>
//## link itsPiListenerThread
class PiListenerThread;

//## link itsPiSpeakerThread
class PiSpeakerThread;

//## attribute new_sock
class ServerSocket;

//## operation Communication(TrainPos*)
class TrainPos;

//## package Pi

//## class Communication

using namespace std;

class Communication : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation Communication(TrainPos*)
    Communication(TrainPos* itsTrainPos);
    
    //## auto_generated
    Communication();
    
    //## auto_generated
    ~Communication();
    
    ////    Operations    ////
    
    //## operation execute()
    OMReactive* execute();
    
    //## operation sendOrder(string)
    void sendOrder(string order);
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getClient_accepted() const;
    
    //## auto_generated
    void setClient_accepted(bool p_client_accepted);
    
    //## auto_generated
    ServerSocket* getNew_sock() const;
    
    //## auto_generated
    void setNew_sock(ServerSocket* p_new_sock);
    
    //## auto_generated
    ServerSocket* getServer() const;
    
    //## auto_generated
    void setServer(ServerSocket* p_server);
    
    //## auto_generated
    TrainPos* getTrainPos() const;
    
    //## auto_generated
    void setTrainPos(TrainPos* p_trainPos);
    
    //## auto_generated
    PiListenerThread* getItsPiListenerThread() const;
    
    //## auto_generated
    void setItsPiListenerThread(PiListenerThread* p_PiListenerThread);
    
    //## auto_generated
    PiSpeakerThread* getItsPiSpeakerThread() const;
    
    //## auto_generated
    void setItsPiSpeakerThread(PiSpeakerThread* p_PiSpeakerThread);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    bool client_accepted;		//## attribute client_accepted
    
    ServerSocket* new_sock;		//## attribute new_sock
    
    ServerSocket* server;		//## attribute server
    
    TrainPos* trainPos;		//## attribute trainPos
    
    ////    Relations and components    ////
    
    PiListenerThread* itsPiListenerThread;		//## link itsPiListenerThread
    
    PiSpeakerThread* itsPiSpeakerThread;		//## link itsPiSpeakerThread
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/Communication.h
*********************************************************************/
