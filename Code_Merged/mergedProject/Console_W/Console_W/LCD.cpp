/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Console_W 
	Configuration 	: Console_W
	Model Element	: LCD
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Console_W/Console_W/LCD.cpp
*********************************************************************/

//## auto_generated
#include "LCD.h"
//## auto_generated
#include <iostream>
//## package Workstation

//## class LCD
LCD::LCD() {
    //#[ operation LCD()
    Line1 = "                    ";  
    Line2 = "                    ";    
    Line3 = "                    ";    
    Line4 = "                    ";  
    //#]
}

LCD::~LCD() {
}

void LCD::clear() {
    //#[ operation clear()
    Line1 = "                    ";  
    Line2 = "                    ";    
    Line3 = "                    ";    
    Line4 = "                    ";  
    //#]
}

void LCD::write_to_position(int x, int y, std::string data) {
    //#[ operation write_to_position(int,int,std::string)
    int c=0;
    	
    if(x==1)
    {            
    	Line1.replace(y-1, data.length(), data );
    } else if(x==2) {
    	Line2.replace(y-1, data.length(), data );
    } else if(x==3) {   
    	Line3.replace(y-1, data.length(), data );
    } else if(x==4) {
    	Line4.replace(y-1, data.length(), data );
    }
                                  
    //std::cout << "Z:" << x << " S:" << y << " DATA: " << data << std::endl;
    
             
    std::cout << std::endl << std::endl << std::endl << std::endl << "  |--------------------|"  << std::endl;
    std::cout << "  |" << Line1 << "|" << std::endl;
    std::cout << "  |" << Line2 << "|" << std::endl;  
    std::cout << "  |" << Line3 << "|" << std::endl;
    std::cout << "  |" << Line4 << "|" << std::endl;  
    std::cout << "  |--------------------|"  << std::endl;
    //#]
}

void LCD::lcd_write(std::string data, int line) {
    //#[ operation lcd_write(std::string,int)
    //#]
}

std::string LCD::getLine1() const {
    return Line1;
}

void LCD::setLine1(std::string p_Line1) {
    Line1 = p_Line1;
}

std::string LCD::getLine2() const {
    return Line2;
}

void LCD::setLine2(std::string p_Line2) {
    Line2 = p_Line2;
}

std::string LCD::getLine3() const {
    return Line3;
}

void LCD::setLine3(std::string p_Line3) {
    Line3 = p_Line3;
}

std::string LCD::getLine4() const {
    return Line4;
}

void LCD::setLine4(std::string p_Line4) {
    Line4 = p_Line4;
}

/*********************************************************************
	File Path	: Console_W/Console_W/LCD.cpp
*********************************************************************/
