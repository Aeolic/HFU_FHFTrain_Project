/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: PiListenerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/PiListenerThread.h
*********************************************************************/

#ifndef PiListenerThread_H
#define PiListenerThread_H

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
#include <oxf/omthread.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## operation PiListenerThread(ServerSocket*,TrainPos*)
class ServerSocket;

//## operation PiListenerThread(ServerSocket*,TrainPos*)
class TrainPos;

//## package Pi

//## class PiListenerThread

using namespace std;

class PiListenerThread : public OMThread {
    ////    Constructors and destructors    ////
    
    ////    Operations    ////
    
public :

    //## operation PiListenerThread(ServerSocket*,TrainPos*)
    PiListenerThread(ServerSocket* new_sock, TrainPos* trainPos);
    
    //## auto_generated
    PiListenerThread();
    
    //## auto_generated
    ~PiListenerThread();
    
    //## operation execute()
    OMReactive* execute();
    
    //## auto_generated
    TrainPos* getItsTrainPos() const;
    
    //## auto_generated
    void setItsTrainPos(TrainPos* p_TrainPos);

protected :

    //## auto_generated
    void cleanUpRelations();

private :

    //## auto_generated
    ServerSocket* getNew_sock() const;
    
    //## auto_generated
    void setNew_sock(ServerSocket* p_new_sock);

protected :

    ServerSocket* new_sock;		//## attribute new_sock
    
    TrainPos* itsTrainPos;		//## link itsTrainPos

public :

    //## operation closeThread()
    void closeThread();

private :

    //## auto_generated
    bool getClose() const;
    
    //## auto_generated
    void setClose(bool p_close);

protected :

    bool close;		//## attribute close
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/PiListenerThread.h
*********************************************************************/
