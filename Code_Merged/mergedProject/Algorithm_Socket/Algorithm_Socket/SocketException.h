/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: SocketException
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/SocketException.h
*********************************************************************/

#ifndef SocketException_H
#define SocketException_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Socket.h"
//## package Socket

//## class SocketException

using namespace std;

class SocketException {
    ////    Constructors and destructors    ////
    
public :

    //## operation SocketException(std::string)
    SocketException(std::string s);
    
    //## auto_generated
    SocketException();
    
    //## auto_generated
    ~SocketException();
    
    ////    Operations    ////
    
    //## operation description()
    std::string description();
    
    ////    Additional operations    ////

private :

    //## auto_generated
    std::string getM_s() const;
    
    //## auto_generated
    void setM_s(std::string p_m_s);
    
    ////    Attributes    ////

protected :

    std::string m_s;		//## attribute m_s
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/SocketException.h
*********************************************************************/
