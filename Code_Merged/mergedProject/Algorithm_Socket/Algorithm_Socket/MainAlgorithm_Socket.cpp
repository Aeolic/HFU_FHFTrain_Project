/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Algorithm_Socket
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/MainAlgorithm_Socket.cpp
*********************************************************************/

//## auto_generated
#include "MainAlgorithm_Socket.h"
//## auto_generated
#include "PiAlgorithm.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            PiAlgorithm * p_PiAlgorithm;
            p_PiAlgorithm = new PiAlgorithm;
            //#[ configuration Algorithm_Socket::Algorithm_Socket 
            //#]
            OXF::start();
            delete p_PiAlgorithm;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/MainAlgorithm_Socket.cpp
*********************************************************************/
