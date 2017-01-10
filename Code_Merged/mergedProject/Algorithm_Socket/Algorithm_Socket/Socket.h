/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Socket
//!	Generated Date	: Tue, 10, Jan 2017  
	File Path	: Algorithm_Socket/Algorithm_Socket/Socket.h
*********************************************************************/

#ifndef Socket_H
#define Socket_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif

#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## dependency SocketException
#include "SocketException.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## dependency types
#include <sys/types.h>
//## dependency socket
#include <sys/socket.h>
//## dependency in
#include <netinet/in.h>
//## dependency netdb
#include <netdb.h>
//## dependency unistd
#include <unistd.h>
//## dependency string
#include <string>
//## dependency inet
#include <arpa/inet.h>
//## classInstance object_0
class object_0_C;

//## dependency std
using namespace std;

//## auto_generated
class ClientSocket;

//## auto_generated
class ServerSocket;

//## auto_generated
class Socket;

//## package Socket


//## attribute MAXCONNECTIONS
const int MAXCONNECTIONS = 5;

//## attribute MAXHOSTNAME
const int MAXHOSTNAME = 200;

//## attribute MAXRECV
const int MAXRECV = 500;

//## classInstance object_0
extern object_0_C object_0;

//## package Socket

//## class Socket

using namespace std;

class Socket {
    ////    Constructors and destructors    ////
    
public :

    //## operation Socket()
    Socket();
    
    //## operation ~Socket()
    virtual ~Socket();
    
    ////    Operations    ////
    
    //## operation accept(Socket) const
    bool accept(Socket& new_socket) const;
    
    //## operation bind(int)
    bool bind(const int port);
    
    //## operation close()
    void close();
    
    // Client initialization
    //## operation connect(const std::string,int)
    bool connect(const std::string host, const int port);
    
    // Server initialization
    //## operation create()
    bool create();
    
    //## operation is_valid() const
    inline bool is_valid() const {
        //#[ operation is_valid() const
        return m_sock != -1;
        //#]
    }
    
    //## operation listen() const
    bool listen() const;
    
    //## operation recv(std::string &) const
    int recv(std::string & s) const;
    
    // Data Transimission
    //## operation send(const std::string) const
    bool send(const std::string s) const;
    
    //## operation set_non_blocking(bool)
    void set_non_blocking(const bool b);
    
    ////    Additional operations    ////
    
    //## auto_generated
    sockaddr_in getM_addr() const;
    
    //## auto_generated
    void setM_addr(sockaddr_in p_m_addr);
    
    //## auto_generated
    int getM_sock() const;
    
    //## auto_generated
    void setM_sock(int p_m_sock);
    
    ////    Attributes    ////

private :

    sockaddr_in m_addr;		//## attribute m_addr
    
    int m_sock;		//## attribute m_sock
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/Socket.h
*********************************************************************/
