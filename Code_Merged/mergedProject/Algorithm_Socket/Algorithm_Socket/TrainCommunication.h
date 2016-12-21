/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainCommunication
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainCommunication.h
*********************************************************************/

#ifndef TrainCommunication_H
#define TrainCommunication_H

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
//## attribute client
class ClientSocket;

//## link itsSHM_Tag_Listener
class SHM_Tag_Listener;

//## link itsTrainListenerThread
class TrainListenerThread;

//## link itsTrainSpeakerThread
class TrainSpeakerThread;

//## package TrainCommunicationPackage

//## class TrainCommunication

using namespace std;

class TrainCommunication : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation TrainCommunication()
    TrainCommunication();
    
    //## auto_generated
    ~TrainCommunication();
    
    ////    Operations    ////
    
    //## operation execute()
    OMReactive* execute();
    
    //## operation sendPositionToPi(string)
    void sendPositionToPi(string position);

private :

    //## operation restartClient()
    void restartClient();
    
    //## operation startClient()
    void startClient();
    
    ////    Additional operations    ////

public :

    //## auto_generated
    bool getConnected() const;
    
    //## auto_generated
    void setConnected(bool p_connected);
    
    //## auto_generated
    SHM_Tag_Listener* getItsSHM_Tag_Listener() const;
    
    //## auto_generated
    void setItsSHM_Tag_Listener(SHM_Tag_Listener* p_SHM_Tag_Listener);
    
    //## auto_generated
    SHM_Tag_Listener* getItsSHM_Tag_Listener_1() const;
    
    //## auto_generated
    void setItsSHM_Tag_Listener_1(SHM_Tag_Listener* p_SHM_Tag_Listener);
    
    //## auto_generated
    TrainListenerThread* getItsTrainListenerThread() const;
    
    //## auto_generated
    void setItsTrainListenerThread(TrainListenerThread* p_TrainListenerThread);
    
    //## auto_generated
    TrainSpeakerThread* getItsTrainSpeakerThread() const;
    
    //## auto_generated
    void setItsTrainSpeakerThread(TrainSpeakerThread* p_TrainSpeakerThread);

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
    
    bool connected;		//## attribute connected
    
    ////    Relations and components    ////
    
    SHM_Tag_Listener* itsSHM_Tag_Listener;		//## link itsSHM_Tag_Listener
    
    SHM_Tag_Listener* itsSHM_Tag_Listener_1;		//## link itsSHM_Tag_Listener_1
    
    TrainListenerThread* itsTrainListenerThread;		//## link itsTrainListenerThread
    
    TrainSpeakerThread* itsTrainSpeakerThread;		//## link itsTrainSpeakerThread
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsSHM_Tag_Listener_1(SHM_Tag_Listener* p_SHM_Tag_Listener);
    
    //## auto_generated
    void _setItsSHM_Tag_Listener_1(SHM_Tag_Listener* p_SHM_Tag_Listener);
    
    //## auto_generated
    void _clearItsSHM_Tag_Listener_1();
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainCommunication.h
*********************************************************************/
