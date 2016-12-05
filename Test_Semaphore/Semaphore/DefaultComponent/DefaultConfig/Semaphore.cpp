/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: langmaxm
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Semaphore
//!	Generated Date	: Mon, 05, Dec 2016  
	File Path	: DefaultComponent/DefaultConfig/Semaphore.cpp
*********************************************************************/

//## auto_generated
#include "Semaphore.h"
//## auto_generated
#include <iostream>
//## package Default

//## class Semaphore

using namespace std;

Semaphore::Semaphore(int startValue) {
    //#[ operation Semaphore(int)
    s = OMOSFactory::instance()->createOMOSSemaphore(0,startValue, 100, NULL); 
    
    
    
    
    
    //#]
}

Semaphore::~Semaphore() {
}

void Semaphore::release() {
    //#[ operation release()
    s->signal();
    //#]
}

void Semaphore::request() {
    //#[ operation request()
    s->wait(-1);
    //#]
}

OMOSSemaphore * Semaphore::getS() const {
    return s;
}

void Semaphore::setS(OMOSSemaphore * p_s) {
    s = p_s;
}

/*********************************************************************
	File Path	: DefaultComponent/DefaultConfig/Semaphore.cpp
*********************************************************************/
