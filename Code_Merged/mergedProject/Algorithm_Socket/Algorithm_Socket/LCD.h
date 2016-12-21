/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: LCD
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/LCD.h
*********************************************************************/

#ifndef LCD_H
#define LCD_H

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
//## class LCD
#include "ILCD.h"
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "Train.h"
//## link Log
class Logger;

//## package Train

//## class LCD

using namespace std;

class LCD : public ILCD {
    ////    Constructors and destructors    ////
    
public :

    //## operation LCD()
    LCD();
    
    //## operation ~LCD()
    virtual ~LCD();
    
    ////    Operations    ////
    
    //## operation clear()
    void clear();
    
    //## operation write_to_position(int,int,std::string)
    void write_to_position(int lin, int col, std::string text);

protected :

    //## operation lcd_write(std::string,int)
    void lcd_write(std::string text, int text_length);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    Logger* getLog() const;

protected :

    //## auto_generated
    void cleanUpRelations();

private :

    //## auto_generated
    int getFd() const;
    
    //## auto_generated
    void setFd(int p_fd);
    
    ////    Attributes    ////

protected :

    int fd;		//## attribute fd
    
    ////    Relations and components    ////
    
    Logger* Log;		//## link Log

public :

    //## auto_generated
    void setLog(Logger* p_Logger);
};

//## package Workstation

//## class LCD

using namespace std;

class LCD : public ILCD {
    ////    Constructors and destructors    ////
    
public :

    //## operation LCD()
    LCD();
    
    //## auto_generated
    virtual ~LCD();
    
    ////    Operations    ////
    
    //## operation clear()
    virtual void clear();
    
    //## operation write_to_position(int,int,std::string)
    virtual void write_to_position(int x, int y, std::string data);

protected :

    //## operation lcd_write(std::string,int)
    virtual void lcd_write(std::string data, int line);
    
    ////    Additional operations    ////

public :

    //## auto_generated
    std::string getLine1() const;
    
    //## auto_generated
    void setLine1(std::string p_Line1);
    
    //## auto_generated
    std::string getLine2() const;
    
    //## auto_generated
    void setLine2(std::string p_Line2);
    
    //## auto_generated
    std::string getLine3() const;
    
    //## auto_generated
    void setLine3(std::string p_Line3);
    
    //## auto_generated
    std::string getLine4() const;
    
    //## auto_generated
    void setLine4(std::string p_Line4);
    
    ////    Attributes    ////

protected :

    std::string Line1;		//## attribute Line1
    
    std::string Line2;		//## attribute Line2
    
    std::string Line3;		//## attribute Line3
    
    std::string Line4;		//## attribute Line4
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/LCD.h
*********************************************************************/
