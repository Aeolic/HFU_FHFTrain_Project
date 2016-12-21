/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: RFID_T 
	Configuration 	: RFID_T
	Model Element	: RFID_T
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: RFID_T/RFID_T/MainRFID_T.cpp
*********************************************************************/

//## auto_generated
#include "MainRFID_T.h"
//## auto_generated
#include "Rfid_Main.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Rfid_Main * p_Rfid_Main;
            p_Rfid_Main = new Rfid_Main;
            //#[ configuration RFID_T::RFID_T 
            //#]
            OXF::start();
            delete p_Rfid_Main;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: RFID_T/RFID_T/MainRFID_T.cpp
*********************************************************************/
