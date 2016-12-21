/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Console_W 
	Configuration 	: Console_W
	Model Element	: LCD
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Console_W/Console_W/LCD.h
*********************************************************************/

#ifndef LCD_H
#define LCD_H

//## auto_generated
#include <oxf/oxf.h>
//## class LCD
#include "ILCD.h"
//## package Workstation

//## class LCD
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
	File Path	: Console_W/Console_W/LCD.h
*********************************************************************/
