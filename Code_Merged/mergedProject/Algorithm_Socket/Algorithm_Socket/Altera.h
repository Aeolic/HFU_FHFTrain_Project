/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Altera
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/Altera.h
*********************************************************************/

#ifndef Altera_H
#define Altera_H

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
#include "Train.h"
//## package Train

//## class Altera

using namespace std;

class Altera {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    Altera();
    
    //## auto_generated
    ~Altera();
    
    ////    Operations    ////
    
    //## operation init()
    void init();
    
    //## operation set_power(float)
    void set_power(float pwr);
    
    ////    Additional operations    ////

private :

    //## auto_generated
    static unsigned short get_MM();
    
    //## auto_generated
    static bool getIs_initialized();
    
    //## auto_generated
    static void setIs_initialized(bool p_is_initialized);
    
    //## auto_generated
    static unsigned short getPortBase();
    
    ////    Attributes    ////

protected :

    static unsigned short _MM;		//## attribute _MM
    
    static bool is_initialized;		//## attribute is_initialized
    
    static unsigned short portBase;		//## attribute portBase

private :

    //## auto_generated
    static void set_MM(unsigned short p__MM);
    
    //## auto_generated
    static void setPortBase(unsigned short p_portBase);

public :

    //## operation set_lights(char,char,int)
    void set_lights(char front_color, char rear_color, int waggon_attached);

private :

    //## auto_generated
    static unsigned short get_DIG_OUT_IN();
    
    //## auto_generated
    static void set_DIG_OUT_IN(unsigned short p__DIG_OUT_IN);
    
    //## auto_generated
    static unsigned short get_DIG_OUT_OUT();
    
    //## auto_generated
    static void set_DIG_OUT_OUT(unsigned short p__DIG_OUT_OUT);

protected :

    static unsigned short _DIG_OUT_IN;		//## attribute _DIG_OUT_IN
    
    static unsigned short _DIG_OUT_OUT;		//## attribute _DIG_OUT_OUT
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/Altera.h
*********************************************************************/
