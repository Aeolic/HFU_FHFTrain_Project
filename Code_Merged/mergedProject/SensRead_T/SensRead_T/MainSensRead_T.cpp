/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SensRead_T 
	Configuration 	: SensRead_T
	Model Element	: SensRead_T
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SensRead_T/SensRead_T/MainSensRead_T.cpp
*********************************************************************/

//## auto_generated
#include "MainSensRead_T.h"
//## auto_generated
#include "SensReader.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            SensReader * p_SensReader;
            p_SensReader = new SensReader;
            //#[ configuration SensRead_T::SensRead_T 
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
	File Path	: SensRead_T/SensRead_T/MainSensRead_T.cpp
*********************************************************************/
