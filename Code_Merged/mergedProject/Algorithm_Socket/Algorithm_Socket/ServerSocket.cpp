/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: ServerSocket
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/ServerSocket.cpp
*********************************************************************/

//## auto_generated
#include "ServerSocket.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package Socket

//## class ServerSocket
ServerSocket::ServerSocket(int port) {
    //#[ operation ServerSocket(int)
    if ( ! Socket::create() )
      {
        throw SocketException ( "Could not create server socket." );
      }
    
    if ( ! Socket::bind ( port ) )
      {
        throw SocketException ( "Could not bind to port." );
      }
    
    if ( ! Socket::listen() )
      {
        throw SocketException ( "Could not listen to socket." );
      }
    
    //#]
}

ServerSocket::~ServerSocket() {
    //#[ operation ~ServerSocket()
    //#]
}

const ServerSocket& ServerSocket::operator<<(const std::string & s) const {
    //#[ operation operator<<(const std::string &) const
    if ( ! Socket::send ( s ) )
      {
        throw SocketException ( "Could not write to socket." );
      }
    
    return *this;
    
    //#]
}

const ServerSocket& ServerSocket::operator>>(std::string & s) const {
    //#[ operation operator>>(std::string &) const
    if ( ! Socket::recv ( s ) )
      {
        throw SocketException ( "Could not read from socket." );
      }
    
    return *this;
    //#]
}

void ServerSocket::accept(ServerSocket& sock) {
    //#[ operation accept(ServerSocket)
    if ( ! Socket::accept ( sock ) )
      {
        throw SocketException ( "Could not accept socket." );
      }
    //#]
}

void ServerSocket::close() {
    //#[ operation close()
    if ( isValid() )
      Socket::close();
    //#]
}

bool ServerSocket::isValid() {
    //#[ operation isValid()
    return Socket::is_valid();
    //#]
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/ServerSocket.cpp
*********************************************************************/
