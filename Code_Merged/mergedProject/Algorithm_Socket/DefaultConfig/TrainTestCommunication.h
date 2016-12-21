/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainTestCommunication
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestCommunication.h
*********************************************************************/

#ifndef TrainTestCommunication_H
#define TrainTestCommunication_H

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
//## attribute client
class ClientSocket;

//## link itsTrainTestListenerThread
class TrainTestListenerThread;

//## operation TrainTestCommunication(TrainTestOrder*)
class TrainTestOrder;

//## link itsTrainTestSpeakerThread
class TrainTestSpeakerThread;

//## package TrainTest

//## class TrainTestCommunication

using namespace std;

class TrainTestCommunication : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation TrainTestCommunication(TrainTestOrder*)
    TrainTestCommunication(TrainTestOrder* trainTestOrder);
    
    //## auto_generated
    TrainTestCommunication();
    
    //## auto_generated
    ~TrainTestCommunication();
    
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
    TrainTestOrder* getItsTrainTestOrder() const;
    
    //## auto_generated
    void setItsTrainTestOrder(TrainTestOrder* p_itsTrainTestOrder);
    
    //## auto_generated
    TrainTestListenerThread* getItsTrainTestListenerThread() const;
    
    //## auto_generated
    void setItsTrainTestListenerThread(TrainTestListenerThread* p_TrainTestListenerThread);
    
    //## auto_generated
    TrainTestSpeakerThread* getItsTrainTestSpeakerThread() const;
    
    //## auto_generated
    void setItsTrainTestSpeakerThread(TrainTestSpeakerThread* p_TrainTestSpeakerThread);

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
    
    TrainTestOrder* itsTrainTestOrder;		//## attribute itsTrainTestOrder
    
    ////    Relations and components    ////
    
    TrainTestListenerThread* itsTrainTestListenerThread;		//## link itsTrainTestListenerThread
    
    TrainTestSpeakerThread* itsTrainTestSpeakerThread;		//## link itsTrainTestSpeakerThread
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestCommunication.h
*********************************************************************/
