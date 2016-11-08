/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: Startup
//!	Generated Date	: Thu, 03, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/Startup.cpp
*********************************************************************/

//## auto_generated
#include "Startup.h"
//## auto_generated
#include <iostream>
//## dependency std
using namespace std;

//## package Default

//## class Startup

using namespace std;

Startup::Startup() {
    //#[ operation Startup()
                        MyThread test1;
                        MyThread test2;      
                        infinite();
    //#]
}

Startup::~Startup() {
}

void Startup::infinite() {
    //#[ operation infinite()
                     while(true){   
                     
                     usleep(1000000);
                     cout << "." << endl;
                     }
    //#]
}

/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/Startup.cpp
*********************************************************************/
