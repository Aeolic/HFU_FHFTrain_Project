/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_W 
	Configuration 	: SM_Read_W
	Model Element	: SM_Read_W
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_W/SM_Read_W/MainSM_Read_W.cpp
*********************************************************************/

//## auto_generated
#include "MainSM_Read_W.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            //#[ configuration SM_Read_W::SM_Read_W 
            {
            	SM_Read *p_SM_Read;
            	p_SM_Read = new SM_Read(argc, argv);   
            	return 0;
            }
            //#]
            OXF::start();
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: SM_Read_W/SM_Read_W/MainSM_Read_W.cpp
*********************************************************************/
