/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: Buffer
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/Buffer.cpp
*********************************************************************/

//## auto_generated
#include "Buffer.h"
//## link itsFree
#include "Semaphore.h"
//## auto_generated
#include <iostream>
//## dependency std
using namespace std;

//## package Default

//## class Buffer

using namespace std;

Buffer::Buffer() {
    itsFree = NULL;
    itsUsed = NULL;
    //#[ operation Buffer()
               itsUsed = new Semaphore(0);
               itsFree = new Semaphore(10);     
               for(int i=0;i<10;i++){
               myInts[i] =0;
               }           
               counter = 0;
               counter2 =0;
               
              
    //#]
}

Buffer::~Buffer() {
    cleanUpRelations();
}

int Buffer::get() {
    //#[ operation get()
                                       int zw;
                                       itsUsed->request();
                                       zw= myInts[counter2];     
                                       counter2++;
                                       itsFree->release();  
                                       return zw;
    //#]
}

void Buffer::put(int arg) {
    //#[ operation put(int)
                         itsFree->request();
                         myInts[counter]=arg;  
                         counter++;
                         itsUsed->release() ;
                         
    //#]
}

int Buffer::getCounter() const {
    return counter;
}

void Buffer::setCounter(int p_counter) {
    counter = p_counter;
}

int Buffer::getCounter2() const {
    return counter2;
}

void Buffer::setCounter2(int p_counter2) {
    counter2 = p_counter2;
}

int Buffer::getMyInts(int i1) const {
    return myInts[i1];
}

void Buffer::setMyInts(int i1, int p_myInts) {
    myInts[i1] = p_myInts;
}

Semaphore* Buffer::getItsFree() const {
    return itsFree;
}

void Buffer::setItsFree(Semaphore* p_Semaphore) {
    itsFree = p_Semaphore;
}

Semaphore* Buffer::getItsUsed() const {
    return itsUsed;
}

void Buffer::setItsUsed(Semaphore* p_Semaphore) {
    itsUsed = p_Semaphore;
}

void Buffer::cleanUpRelations() {
    if(itsFree != NULL)
        {
            itsFree = NULL;
        }
    if(itsUsed != NULL)
        {
            itsUsed = NULL;
        }
}

/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/Buffer.cpp
*********************************************************************/
