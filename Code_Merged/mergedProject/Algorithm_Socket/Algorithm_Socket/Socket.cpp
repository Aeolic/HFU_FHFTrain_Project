/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Socket
//!	Generated Date	: Tue, 10, Jan 2017  
	File Path	: Algorithm_Socket/Algorithm_Socket/Socket.cpp
*********************************************************************/

//## dependency string
#include "string"
//## dependency errno
#include <errno.h>
//## dependency fcntl
#include <fcntl.h>
//## dependency iostream
#include <iostream>
//## auto_generated
#include "Socket.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## classInstance object_0
#include "object_0.h"
//## auto_generated
#include "ClientSocket.h"
//## auto_generated
#include "ServerSocket.h"
//## package Socket


//## classInstance object_0
object_0_C object_0;

//## package Socket

//## class Socket
Socket::Socket() : m_sock ( -1 )
  {
    //#[ operation Socket()
    
      memset ( &m_addr,
    	   0,
    	   sizeof ( m_addr ) );
    
    //#]
}

Socket::~Socket() {
    //#[ operation ~Socket()
    if ( is_valid() )
      ::close ( m_sock );
    //#]
}

bool Socket::accept(Socket& new_socket) const {
    //#[ operation accept(Socket) const
    int addr_length = sizeof ( m_addr );
    new_socket.m_sock = ::accept ( m_sock, ( sockaddr * ) &m_addr, ( socklen_t * ) &addr_length );
    
    if ( new_socket.m_sock <= 0 )
      return false;
    else
      return true;
    //#]
}

bool Socket::bind(const int port) {
    //#[ operation bind(int)
    
      if ( ! is_valid() )
        {
          return false;
        }
    
    
    
      m_addr.sin_family = AF_INET;
      m_addr.sin_addr.s_addr = INADDR_ANY;
      m_addr.sin_port = htons ( port );
    
      int bind_return = ::bind ( m_sock,
    			     ( struct sockaddr * ) &m_addr,
    			     sizeof ( m_addr ) );
    
    
      if ( bind_return == -1 )
        {
          return false;
        }
    
      return true;
    //#]
}

void Socket::close() {
    //#[ operation close()
    if ( is_valid() )
    	::close ( m_sock );
    //#]
}

bool Socket::connect(const std::string host, const int port) {
    //#[ operation connect(const std::string,int)
    if ( ! is_valid() ) return false;
    
    m_addr.sin_family = AF_INET;
    m_addr.sin_port = htons ( port );
    
    int status = inet_pton ( AF_INET, host.c_str(), &m_addr.sin_addr );
    
    if ( errno == EAFNOSUPPORT ) return false;
    
    status = ::connect ( m_sock, ( sockaddr * ) &m_addr, sizeof ( m_addr ) );
    
    if ( status == 0 )
      return true;
    else
      return false;
    //#]
}

bool Socket::create() {
    //#[ operation create()
    m_sock = socket ( AF_INET,
    	    SOCK_STREAM,
    	    0 );
    
    if ( ! is_valid() )
      return false;
    
    
    // TIME_WAIT - argh
    int on = 1;
    if ( setsockopt ( m_sock, SOL_SOCKET, SO_REUSEADDR, ( const char* ) &on, sizeof ( on ) ) == -1 )
      return false;
    
    
    return true;
    
    //#]
}

bool Socket::listen() const {
    //#[ operation listen() const
    if ( ! is_valid() )
      {
        return false;
      }
    
    int listen_return = ::listen ( m_sock, MAXCONNECTIONS );
    
    
    if ( listen_return == -1 )
      {
        return false;
      }
    
    return true;
    //#]
}

int Socket::recv(std::string & s) const {
    //#[ operation recv(std::string &) const
    char buf [ MAXRECV + 1 ];
    
    s = "";
    
    memset ( buf, 0, MAXRECV + 1 );
    
    int status = ::recv ( m_sock, buf, MAXRECV, 0 );
    
    if ( status == -1 )
      {
         std::cout << "status == -1   errno == " << errno << "  in Socket::recv\n";
        return 0;
      }
    else if ( status == 0 )
      {
        return 0;
      }
    else
      {
        s = buf;
        return status;
      }
    //#]
}

bool Socket::send(const std::string s) const {
    //#[ operation send(const std::string) const
    int status = ::send ( m_sock, s.c_str(), s.size(), MSG_NOSIGNAL );
    if ( status == -1 )
      {
        return false;
      }
    else
      {
        return true;
      }
    //#]
}

void Socket::set_non_blocking(const bool b) {
    //#[ operation set_non_blocking(bool)
    
      int opts;
    
      opts = fcntl ( m_sock,
    		 F_GETFL );
    
      if ( opts < 0 )
        {
          return;
        }
    
      if ( b )
        opts = ( opts | O_NONBLOCK );
      else
        opts = ( opts & ~O_NONBLOCK );
    
      fcntl ( m_sock,
    	  F_SETFL,opts );
    
    //#]
}

sockaddr_in Socket::getM_addr() const {
    return m_addr;
}

void Socket::setM_addr(sockaddr_in p_m_addr) {
    m_addr = p_m_addr;
}

int Socket::getM_sock() const {
    return m_sock;
}

void Socket::setM_sock(int p_m_sock) {
    m_sock = p_m_sock;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/Socket.cpp
*********************************************************************/
