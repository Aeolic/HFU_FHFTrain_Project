/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: ILCD
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/ILCD.h
*********************************************************************/

#ifndef ILCD_H
#define ILCD_H

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
#include "Common.h"
//## package Common

//## class ILCD

using namespace std;

class ILCD {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ILCD();
    
    //## auto_generated
    virtual ~ILCD() = 0;
    
    ////    Operations    ////
    
    //## operation clear()
    virtual void clear() = 0;
    
    //## operation write_to_position(int,int,std::string)
    virtual void write_to_position(int x, int y, std::string data) = 0;

protected :

    //## operation lcd_write(std::string,int)
    virtual void lcd_write(std::string data, int line) = 0;
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/ILCD.h
*********************************************************************/
