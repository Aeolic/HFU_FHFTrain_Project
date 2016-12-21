/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Console_T 
	Configuration 	: Console_T
	Model Element	: Console_T
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Console_T/Console_T/MainConsole_T.cpp
*********************************************************************/

//## auto_generated
#include "MainConsole_T.h"
//## auto_generated
#include "Console.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Console * p_Console;
            p_Console = new Console;
            //#[ configuration Console_T::Console_T 
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
	File Path	: Console_T/Console_T/MainConsole_T.cpp
*********************************************************************/
