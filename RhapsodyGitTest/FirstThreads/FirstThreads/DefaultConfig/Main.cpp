/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: kotzjanm
	Component	: FirstThreads 
	Configuration 	: DefaultConfig
	Model Element	: Main
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: FirstThreads/DefaultConfig/Main.cpp
*********************************************************************/

//## auto_generated
#include "Main.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include "MyThread.h"
//## package Default

//## class Main
Main::Main() {
    //#[ operation Main()
    MyThread t1;
    MyThread t2;
    infinite();
    //#]
}

Main::~Main() {
}

void Main::infinite() {
    //#[ operation infinite()
    while (true)
    {
    	std::cout << "." <<  std::endl;
    	usleep(1000000);
    }
    //#]
}

/*********************************************************************
	File Path	: FirstThreads/DefaultConfig/Main.cpp
*********************************************************************/
