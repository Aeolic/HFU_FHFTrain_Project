/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Motor_T 
	Configuration 	: Motor_T
	Model Element	: Motor_T
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Motor_T/Motor_T/MainMotor_T.cpp
*********************************************************************/

//## auto_generated
#include "MainMotor_T.h"
//## auto_generated
#include "Motor_Main.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            Motor_Main * p_Motor_Main;
            p_Motor_Main = new Motor_Main;
            //#[ configuration Motor_T::Motor_T 
            sched_param *sp = new sched_param;        
            
            sp->sched_priority = 99;
            
            sched_setscheduler(0, SCHED_FIFO, sp);
            //#]
            OXF::start();
            delete p_Motor_Main;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: Motor_T/Motor_T/MainMotor_T.cpp
*********************************************************************/
