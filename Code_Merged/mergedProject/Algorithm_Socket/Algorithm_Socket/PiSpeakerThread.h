/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: PiSpeakerThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/PiSpeakerThread.h
*********************************************************************/

#ifndef PiSpeakerThread_H
#define PiSpeakerThread_H

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
//## dependency ServerSocket
class ServerSocket;

//class ServerSocket;

//## package Pi

//## class PiSpeakerThread

using namespace std;

class PiSpeakerThread : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation PiSpeakerThread(ServerSocket*)
    PiSpeakerThread(ServerSocket* new_sock);
    
    //## auto_generated
    PiSpeakerThread();
    
    //## auto_generated
    ~PiSpeakerThread();
    
    ////    Operations    ////
    
    //## operation sendOrderToTrain(std::string)
    void sendOrderToTrain(std::string order);
    
    //## operation execute()
    OMReactive* execute();
    
    //## operation closeThread()
    void closeThread();

private :

    //## auto_generated
    bool getClose() const;
    
    //## auto_generated
    void setClose(bool p_close);
    
    //## auto_generated
    ServerSocket* getNew_sock() const;
    
    //## auto_generated
    void setNew_sock(ServerSocket* p_new_sock);

protected :

    bool close;		//## attribute close
    
    ServerSocket* new_sock;		//## attribute new_sock
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/PiSpeakerThread.h
*********************************************************************/
