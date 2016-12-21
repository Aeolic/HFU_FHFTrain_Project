/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: ClientSocket
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/ClientSocket.cpp
*********************************************************************/

//## auto_generated
#include "ClientSocket.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package Socket

//## class ClientSocket
ClientSocket::ClientSocket(std::string host, int port) : connected(true) {
    //#[ operation ClientSocket(std::string,int)
    if ( ! Socket::create() )
      {
        throw SocketException ( "Could not create client socket." );
      }
    
    if ( ! Socket::connect ( host, port ) )
      {
        throw SocketException ( "Could not bind to port." );
      }
    
    //#]
}

const ClientSocket& ClientSocket::operator<<(const std::string & s) const {
    //#[ operation operator<<(const std::string &) const
    if ( ! Socket::send ( s ) )
      {
        throw SocketException ( "Could not write to socket." );
      }
    
    return *this;
    
    //#]
}

const ClientSocket& ClientSocket::operator>>(std::string & s) const {
    //#[ operation operator>>(std::string &) const
    if ( ! Socket::recv ( s ) )
      {
        throw SocketException ( "Could not read from socket." );
      }
    
    return *this;
    //#]
}

ClientSocket::ClientSocket() : connected(true) {
}

bool ClientSocket::getConnected() const {
    return connected;
}

void ClientSocket::setConnected(bool p_connected) {
    connected = p_connected;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/ClientSocket.cpp
*********************************************************************/
