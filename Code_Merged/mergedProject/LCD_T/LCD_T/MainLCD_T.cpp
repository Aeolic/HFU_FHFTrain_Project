/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: LCD_T 
	Configuration 	: LCD_T
	Model Element	: LCD_T
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: LCD_T/LCD_T/MainLCD_T.cpp
*********************************************************************/

//## auto_generated
#include "MainLCD_T.h"
//## auto_generated
#include "LCD_Main.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            LCD_Main * p_LCD_Main;
            p_LCD_Main = new LCD_Main;
            p_LCD_Main->startBehavior();
            //#[ configuration LCD_T::LCD_T 
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
	File Path	: LCD_T/LCD_T/MainLCD_T.cpp
*********************************************************************/
