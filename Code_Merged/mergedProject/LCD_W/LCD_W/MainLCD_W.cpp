/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: LCD_W 
	Configuration 	: LCD_W
	Model Element	: LCD_W
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: LCD_W/LCD_W/MainLCD_W.cpp
*********************************************************************/

//## auto_generated
#include "MainLCD_W.h"
//## auto_generated
#include "LCD_Main.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            LCD_Main * p_LCD_Main;
            p_LCD_Main = new LCD_Main;
            p_LCD_Main->startBehavior();
            //#[ configuration LCD_W::LCD_W 
            //#]
            OXF::start();
            delete p_LCD_Main;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: LCD_W/LCD_W/MainLCD_W.cpp
*********************************************************************/
