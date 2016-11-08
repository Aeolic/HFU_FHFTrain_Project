/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: MyThread
//!	Generated Date	: Thu, 03, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/MyThread.cpp
*********************************************************************/

//## auto_generated
#include "MyThread.h"
//## auto_generated
#include <iostream>
//## package Default

//## class MyThread

using namespace std;

int MyThread::tid(0);

MyThread::MyThread(IOxfActive* theActiveContext) {
    setActiveContext(this, true);
    initStatechart();
    //#[ operation MyThread()
                 ownID = tid;        
                 cout << "Thread mit der ID" << ownID << " wurde erstellt." << endl;
                 tid++;        
                startBehavior(); 
                
    //#]
}

MyThread::~MyThread() {
    cancelTimeouts();
}

void MyThread::show() {
    //#[ operation show()
              cout << "Thread mit Nummer " << ownID << " gibt aus." << endl;
    //#]
}

void MyThread::tick() {
    //#[ operation tick()
       
    //#]
}

int MyThread::getOwnID() const {
    return ownID;
}

void MyThread::setOwnID(int p_ownID) {
    ownID = p_ownID;
}

int MyThread::getTid() {
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
        rootState_subState = running;
        rootState_active = running;
        rootState_timeout = scheduleTimeout(2000, NULL);
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
                            rootState_timeout = scheduleTimeout(2000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/MyThread.cpp
*********************************************************************/
