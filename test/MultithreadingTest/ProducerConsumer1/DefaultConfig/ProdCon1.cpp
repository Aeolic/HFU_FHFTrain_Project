/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: ProdCon1
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/ProdCon1.cpp
*********************************************************************/

//## auto_generated
#include "ProdCon1.h"
//## link itsBuffer
#include "Buffer.h"
//## link itsConsumer
#include "Consumer.h"
//## link itsProducer
#include "Producer.h"
//## auto_generated
#include <iostream>
//## package Default

//## class ProdCon1

using namespace std;

ProdCon1::ProdCon1() {
    itsBuffer = NULL;
    itsConsumer = NULL;
    itsProducer = NULL;
    //#[ operation ProdCon1()
                                 itsBuffer = new Buffer();
                                 itsProducer = new Producer(itsBuffer);   
                                 //itsConsumer = new Consumer(itsBuffer);
    //#]
}

ProdCon1::~ProdCon1() {
    cleanUpRelations();
}

Buffer* ProdCon1::getItsBuffer() const {
    return itsBuffer;
}

void ProdCon1::setItsBuffer(Buffer* p_Buffer) {
    itsBuffer = p_Buffer;
}

Consumer* ProdCon1::getItsConsumer() const {
    return itsConsumer;
}

void ProdCon1::setItsConsumer(Consumer* p_Consumer) {
    itsConsumer = p_Consumer;
}

Producer* ProdCon1::getItsProducer() const {
    return itsProducer;
}

void ProdCon1::setItsProducer(Producer* p_Producer) {
    itsProducer = p_Producer;
}

void ProdCon1::cleanUpRelations() {
    if(itsBuffer != NULL)
        {
            itsBuffer = NULL;
        }
    if(itsConsumer != NULL)
        {
            itsConsumer = NULL;
        }
    if(itsProducer != NULL)
        {
            itsProducer = NULL;
        }
}

/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/ProdCon1.cpp
*********************************************************************/
