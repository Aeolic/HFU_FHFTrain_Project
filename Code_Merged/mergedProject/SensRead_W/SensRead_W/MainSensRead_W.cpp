/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SensRead_W 
	Configuration 	: SensRead_W
	Model Element	: SensRead_W
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SensRead_W/SensRead_W/MainSensRead_W.cpp
*********************************************************************/

//## auto_generated
#include "MainSensRead_W.h"
//## auto_generated
#include "SensReader.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            SensReader * p_SensReader;
            p_SensReader = new SensReader;
            //#[ configuration SensRead_W::SensRead_W 
            //#]
            OXF::start();
            delete p_SensReader;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: SensRead_W/SensRead_W/MainSensRead_W.cpp
*********************************************************************/
