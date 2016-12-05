/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: langmaxm
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Mon, 05, Dec 2016  
	File Path	: DefaultComponent/DefaultConfig/MainDefaultComponent.cpp
*********************************************************************/

//## auto_generated
#include "MainDefaultComponent.h"
//## auto_generated
#include "Semaphore.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Semaphore * p_Semaphore;
            p_Semaphore = new Semaphore;
            //#[ configuration DefaultComponent::DefaultConfig 
            //#]
            OXF::start();
            delete p_Semaphore;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/MainDefaultComponent.cpp
*********************************************************************/
