/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: kotzjanm
	Component	: FirstThreads 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: FirstThreads/DefaultConfig/MainFirstThreads.cpp
*********************************************************************/

//## auto_generated
#include "MainFirstThreads.h"
//## auto_generated
#include "Main.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Main * p_Main;
            p_Main = new Main;
            //#[ configuration FirstThreads::DefaultConfig 
            //#]
            OXF::start();
            delete p_Main;
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
