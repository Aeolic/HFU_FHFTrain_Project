/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: ServerSocket
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/ServerSocket.h
*********************************************************************/

#ifndef ServerSocket_H
#define ServerSocket_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## dependency Socket
#include "Socket.h"
//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "SocketException.h"
//## package Socket

//## class ServerSocket

using namespace std;

class ServerSocket : private Socket {
public :

    //## operation ServerSocket(int)
    ServerSocket(int port);
    
    //## operation ServerSocket()
    inline ServerSocket() {
        //#[ operation ServerSocket()
        //#]
    }
    
    //## operation ~ServerSocket()
    virtual ~ServerSocket();
    
    //## operation operator<<(const std::string &) const
    const ServerSocket& operator<<(const std::string & s) const;
    
    //## operation operator>>(std::string &) const
    const ServerSocket& operator>>(std::string & s) const;
    
    //## operation accept(ServerSocket)
    void accept(ServerSocket& sock);
    
    //## operation close()
    void close();
    
    //## operation isValid()
    bool isValid();
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/ServerSocket.h
*********************************************************************/
