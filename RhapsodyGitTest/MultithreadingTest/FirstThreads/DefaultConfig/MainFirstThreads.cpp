/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: FirstThreads 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Thu, 03, Nov 2016  
	File Path	: FirstThreads/DefaultConfig/MainFirstThreads.cpp
*********************************************************************/

//## auto_generated
#include "MainFirstThreads.h"
//## auto_generated
#include "Startup.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Startup * p_Startup;
            p_Startup = new Startup;
            //#[ configuration FirstThreads::DefaultConfig 
            //#]
            OXF::start();
            delete p_Startup;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: FirstThreads/DefaultConfig/MainFirstThreads.cpp
*********************************************************************/
