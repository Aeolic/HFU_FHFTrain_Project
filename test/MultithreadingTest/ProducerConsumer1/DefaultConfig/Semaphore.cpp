/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: Semaphore
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/Semaphore.cpp
*********************************************************************/

//## auto_generated
#include "Semaphore.h"
//## auto_generated
#include <iostream>
//## dependency std
using namespace std;

//## package Default

//## class Semaphore

using namespace std;

Semaphore::Semaphore(int startValue) {
    //#[ operation Semaphore(int)
    s = OMOSFactory::instance()->createOMOSSemaphore( 0,startValue,10,NULL);
    cout << "Semaphore mit Value: " << startValue << " wurde erstellt." << endl;
    //#]
}

Semaphore::~Semaphore() {
}

void Semaphore::giveStatus() {
    //#[ operation giveStatus()
               
    //#]
}

void Semaphore::release() {
    //#[ operation release()
                     s++;        
                     cout << "Release" << endl;
    //#]
}

void Semaphore::request() {
    //#[ operation request()
                               s--;
                               cout << "Request" << endl;
    //#]
}

OMOSSemaphore * Semaphore::getS() const {
    return s;
}

void Semaphore::setS(OMOSSemaphore * p_s) {
    s = p_s;
}

/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/Semaphore.cpp
*********************************************************************/
