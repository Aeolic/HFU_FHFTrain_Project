/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: SocketException
//!	Generated Date	: Mon, 21, Nov 2016  
	File Path	: DefaultComponent/DefaultConfig/SocketException.h
*********************************************************************/

#ifndef SocketException_H
#define SocketException_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <string>
//## package Default

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
	File Path	: DefaultComponent/DefaultConfig/SocketException.h
*********************************************************************/
