/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: Consumer
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/Consumer.cpp
*********************************************************************/

//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Consumer.h"
//## operation Consumer(Buffer*)
#include "Buffer.h"
//## auto_generated
#include <iostream>
//## package Default

//## class Consumer

using namespace std;

Consumer::Consumer(Buffer* buff, IOxfActive* theActiveContext) {
    itsBuffer = NULL;
    setActiveContext(theActiveContext, false);
    initStatechart();
    //#[ operation Consumer(Buffer*)
                           itsBuffer = buff;
                           startBehavior();
    //#]
}

Consumer::Consumer(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    itsBuffer = NULL;
    initStatechart();
}

Consumer::~Consumer() {
    cleanUpRelations();
    cancelTimeouts();
}

void Consumer::read() {
    //#[ operation read()
                                         cout << "Der Consumer liest: " << endl;
                                         int zw = itsBuffer->get();   
                                         cout << zw << endl;
                                                 
    //#]
}

int Consumer::getReadCounter() const {
    return readCounter;
}

void Consumer::setReadCounter(int p_readCounter) {
    readCounter = p_readCounter;
}

Buffer* Consumer::getItsBuffer() const {
    return itsBuffer;
}

void Consumer::setItsBuffer(Buffer* p_Buffer) {
    itsBuffer = p_Buffer;
}

bool Consumer::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Consumer::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Consumer::cleanUpRelations() {
    if(itsBuffer != NULL)
        {
            itsBuffer = NULL;
        }
}

void Consumer::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool Consumer::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Consumer::rootState_entDef() {
    {
        rootState_subState = wait7secs;
        rootState_active = wait7secs;
        rootState_timeout = scheduleTimeout(7000, NULL);
    }
}

IOxfReactive::TakeEventStatus Consumer::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    switch (rootState_active) {
        // State running
        case running:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            cancel(rootState_timeout);
                            //#[ transition 0 
                            read();
                            //#]
                            rootState_subState = running;
                            rootState_active = running;
                            rootState_timeout = scheduleTimeout(200, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        // State wait7secs
        case wait7secs:
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            cancel(rootState_timeout);
                            rootState_subState = running;
                            rootState_active = running;
                            rootState_timeout = scheduleTimeout(200, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
        break;
        default:
            break;
    }
    return res;
}

/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/Consumer.cpp
*********************************************************************/
