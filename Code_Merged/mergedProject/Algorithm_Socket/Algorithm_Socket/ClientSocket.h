/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: ClientSocket
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/ClientSocket.h
*********************************************************************/

#ifndef ClientSocket_H
#define ClientSocket_H

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

//## class ClientSocket

using namespace std;

class ClientSocket : private Socket {
public :

    //## operation ClientSocket(std::string,int)
    ClientSocket(std::string host, int port);
    
    //## operation ~ClientSocket()
    inline virtual ~ClientSocket() {
        //#[ operation ~ClientSocket()
        //#]
    }
    
    //## operation operator<<(const std::string &) const
    const ClientSocket& operator<<(const std::string & s) const;
    
    //## operation operator>>(std::string &) const
    const ClientSocket& operator>>(std::string & s) const;
    
    //## auto_generated
    ClientSocket();
    
    //## auto_generated
    bool getConnected() const;
    
    //## auto_generated
    void setConnected(bool p_connected);

protected :

    bool connected;		//## attribute connected
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/ClientSocket.h
*********************************************************************/
