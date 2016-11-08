/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: kotzjanm
	Component	: FirstThreads 
	Configuration 	: DefaultConfig
	Model Element	: MyThread
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: FirstThreads/DefaultConfig/MyThread.cpp
*********************************************************************/

//## auto_generated
#include "MyThread.h"
//## auto_generated
#include <iostream>
//## package Default

//## class MyThread
int MyThread::number(0);

MyThread::MyThread(IOxfActive* theActiveContext) {
    setActiveContext(this, true);
    initStatechart();
    //#[ operation MyThread()
    std::cout << "Konstruktor " << number << std::endl;
    tid = number++;
    //#]
}

MyThread::~MyThread() {
    cancelTimeouts();
}

void MyThread::show() {
    //#[ operation show()
    std::cout << "Object " << tid << ": einen Text" << std::endl;
    //#]
}

int MyThread::getNumber() {
    return number;
}

void MyThread::setNumber(int p_number) {
    number = p_number;
}

int MyThread::getTid() const {
    return tid;
}

void MyThread::setTid(int p_tid) {
    tid = p_tid;
}

bool MyThread::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void MyThread::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void MyThread::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool MyThread::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void MyThread::rootState_entDef() {
    {
        //#[ transition 0 
        show();
        //#]
        rootState_subState = running;
        rootState_active = running;
        rootState_timeout = scheduleTimeout(1000, NULL);
    }
}

IOxfReactive::TakeEventStatus MyThread::rootState_processEvent() {
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
                            show();
                            //#]
                            rootState_subState = running;
                            rootState_active = running;
                            rootState_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: FirstThreads/DefaultConfig/MyThread.cpp
*********************************************************************/
