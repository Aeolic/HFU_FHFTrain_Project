/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: RFID_W 
	Configuration 	: RFID_W
	Model Element	: RFID_W
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: RFID_W/RFID_W/MainRFID_W.cpp
*********************************************************************/

//## auto_generated
#include "MainRFID_W.h"
//## auto_generated
#include "Rfid_Main.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Rfid_Main * p_Rfid_Main;
            p_Rfid_Main = new Rfid_Main;
            //#[ configuration RFID_W::RFID_W 
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
	File Path	: RFID_W/RFID_W/MainRFID_W.cpp
*********************************************************************/
