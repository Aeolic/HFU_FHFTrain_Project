/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: Producer
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/Producer.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Producer.h"
//## operation Producer(Buffer*)
#include "Buffer.h"
//## auto_generated
#include <iostream>
//## package Default

//## class Producer

using namespace std;

Producer::Producer(Buffer* buff, IOxfActive* theActiveContext) {
    itsBuffer = NULL;
    setActiveContext(theActiveContext, false);
    initStatechart();
    //#[ operation Producer(Buffer*)
                                        num = 10;   
                                        itsBuffer = buff;    
                                         startBehavior();
                                      
    //#]
}

Producer::Producer(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsBuffer = NULL;
    initStatechart();
}

Producer::~Producer() {
    cleanUpRelations();
    cancelTimeouts();
}

void Producer::write() {
    //#[ operation write()
                     itsBuffer->put(num);       
                     cout << "Der Producer hat: " << num << " in den Buffer geschrieben." << endl;
                     num = num+10;     
                     
    //#]
}

int Producer::getNum() const {
    return num;
}

void Producer::setNum(int p_num) {
    num = p_num;
}

Buffer* Producer::getItsBuffer() const {
    return itsBuffer;
}

void Producer::setItsBuffer(Buffer* p_Buffer) {
    itsBuffer = p_Buffer;
}

bool Producer::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Producer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Producer::cleanUpRelations() {
    if(itsBuffer != NULL)
        {
            itsBuffer = NULL;
        }
}

void Producer::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Producer::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Producer::rootState_entDef() {
    {
        rootState_subState = running;
        rootState_active = running;
        rootState_timeout = scheduleTimeout(2000, NULL);
    }
}

IOxfReactive::TakeEventStatus Producer::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State running
    if(rootState_active == running)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            cancel(rootState_timeout);
                            //#[ transition 1 
                            write();
                            //#]
                            rootState_subState = running;
                            rootState_active = running;
                            rootState_timeout = scheduleTimeout(2000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/Producer.cpp
*********************************************************************/
