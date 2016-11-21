/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Socket
//!	Generated Date	: Mon, 21, Nov 2016  
	File Path	: DefaultComponent/DefaultConfig/Socket.h
*********************************************************************/

#ifndef Socket_H
#define Socket_H

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
//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## dependency std
using namespace std;

//## attribute ::Default::TopLevel.MAXHOSTNAME
const int MAXHOSTNAME = 200;

//## attribute ::Default::TopLevel.MAXCONNECTIONS
const int MAXCONNECTIONS = 5;

//## attribute ::Default::TopLevel.MAXRECV
const int MAXRECV = 500;

//## package Default

//## class Socket

using namespace std;

class Socket {
public :

    //## operation Socket()
    Socket();
    
    //## operation ~Socket()
    virtual ~Socket();
    
    // Server initialization
    //## operation create()
    bool create();
    
    //## operation bind(int)
    bool bind(const int port);
    
    //## operation listen() const
    bool listen() const;
    
    //## operation accept(Socket) const
    bool accept(Socket& new_socket) const;
    
    // Client initialization
    //## operation connect(const std::string,int)
    bool connect(const std::string host, const int port);
    
    // Data Transimission
    //## operation send(const std::string) const
    bool send(const std::string s) const;
    
    //## operation recv(std::string &) const
    int recv(std::string & s) const;
    
    //## operation set_non_blocking(bool)
    void set_non_blocking(const bool b);
    
    //## operation is_valid() const
    inline bool is_valid() const {
        //#[ operation is_valid() const
        return m_sock != -1;
        //#]
    }

private :

    int m_sock;		//## attribute m_sock
    
    sockaddr_in m_addr;		//## attribute m_addr

public :

    //## auto_generated
    sockaddr_in getM_addr() const;
    
    //## auto_generated
    void setM_addr(sockaddr_in p_m_addr);
    
    //## auto_generated
    int getM_sock() const;
    
    //## auto_generated
    void setM_sock(int p_m_sock);
};

#endif
/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Socket.h
*********************************************************************/
