/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Console_W 
	Configuration 	: Console_W
	Model Element	: Console_W
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Console_W/Console_W/MainConsole_W.cpp
*********************************************************************/

//## auto_generated
#include "MainConsole_W.h"
//## auto_generated
#include "Console.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Console * p_Console;
            p_Console = new Console;
            //#[ configuration Console_W::Console_W 
            //#]
            OXF::start();
            delete p_Console;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Console_W/Console_W/MainConsole_W.cpp
*********************************************************************/
