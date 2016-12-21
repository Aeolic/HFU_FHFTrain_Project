/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Motor_T 
	Configuration 	: Motor_T
	Model Element	: LCD
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Motor_T/Motor_T/LCD.h
*********************************************************************/

#ifndef LCD_H
#define LCD_H

//## auto_generated
#include <oxf/oxf.h>
//## class LCD
#include "ILCD.h"
//## auto_generated
#include "Train.h"
//## link Log
class Logger;

//## package Train

//## class LCD
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

#endif
/*********************************************************************
	File Path	: Motor_T/Motor_T/LCD.h
*********************************************************************/
