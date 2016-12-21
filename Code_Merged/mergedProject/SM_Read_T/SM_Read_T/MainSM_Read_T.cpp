/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_T 
	Configuration 	: SM_Read_T
	Model Element	: SM_Read_T
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_T/SM_Read_T/MainSM_Read_T.cpp
*********************************************************************/

//## auto_generated
#include "MainSM_Read_T.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            //#[ configuration SM_Read_T::SM_Read_T 
            {
            	SM_Read *p_SM_Read;
            	p_SM_Read = new SM_Read(argc, argv);
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
	File Path	: SM_Read_T/SM_Read_T/MainSM_Read_T.cpp
*********************************************************************/
