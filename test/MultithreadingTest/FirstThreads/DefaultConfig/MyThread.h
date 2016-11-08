/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: FirstThreads 
	Configuration 	: DefaultConfig
	Model Element	: MyThread
//!	Generated Date	: Thu, 03, Nov 2016  
	File Path	: FirstThreads/DefaultConfig/MyThread.h
*********************************************************************/

#ifndef MyThread_H
#define MyThread_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## package Default

//## class MyThread
class MyThread : public OMThread, public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## operation MyThread()
    MyThread(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~MyThread();
    
    ////    Operations    ////
    
    //## operation show()
    void show();
    
    //## operation tick()
    void tick();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getOwnID() const;
    
    //## auto_generated
    void setOwnID(int p_ownID);
    
    //## auto_generated
    static int getTid();
    
    //## auto_generated
    static void setTid(int p_tid);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int ownID;		//## attribute ownID
    
    static int tid;		//## attribute tid
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // running:
    //## statechart_method
    inline bool running_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum MyThread_Enum {
        OMNonState = 0,
        running = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool MyThread::rootState_IN() const {
    return true;
}

inline bool MyThread::running_IN() const {
    return rootState_subState == running;
}

#endif
/*********************************************************************
	File Path	: FirstThreads/DefaultConfig/MyThread.h
*********************************************************************/
