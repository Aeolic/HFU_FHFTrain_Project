/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: SocketException
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/SocketException.cpp
*********************************************************************/

//## auto_generated
#include "SocketException.h"
//## auto_generated
#include <iostream>
//## package Socket

//## class SocketException
SocketException::SocketException(std::string s) {
    //#[ operation SocketException(std::string)
    m_s = s;
    //#]
}

SocketException::SocketException() {
}

SocketException::~SocketException() {
}

std::string SocketException::description() {
    //#[ operation description()
    return m_s;
    //#]
}

std::string SocketException::getM_s() const {
    return m_s;
}

void SocketException::setM_s(std::string p_m_s) {
    m_s = p_m_s;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/SocketException.cpp
*********************************************************************/
