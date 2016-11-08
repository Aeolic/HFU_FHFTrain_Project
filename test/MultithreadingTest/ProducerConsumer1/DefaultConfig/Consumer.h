/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: Consumer
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/Consumer.h
*********************************************************************/

#ifndef Consumer_H
#define Consumer_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## operation Consumer(Buffer*)
class Buffer;

//## package Default

//## class Consumer
class Consumer : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## operation Consumer(Buffer*)
    Consumer(Buffer* buff, IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    Consumer(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Consumer();
    
    ////    Operations    ////
    
    //## operation read()
    void read();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getReadCounter() const;
    
    //## auto_generated
    void setReadCounter(int p_readCounter);
    
    //## auto_generated
    Buffer* getItsBuffer() const;
    
    //## auto_generated
    void setItsBuffer(Buffer* p_Buffer);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cleanUpRelations();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int readCounter;		//## attribute readCounter
    
    ////    Relations and components    ////
    
    Buffer* itsBuffer;		//## link itsBuffer
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // wait7secs:
    //## statechart_method
    inline bool wait7secs_IN() const;
    
    // running:
    //## statechart_method
    inline bool running_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Consumer_Enum {
        OMNonState = 0,
        wait7secs = 1,
        running = 2
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool Consumer::rootState_IN() const {
    return true;
}

inline bool Consumer::wait7secs_IN() const {
    return rootState_subState == wait7secs;
}

inline bool Consumer::running_IN() const {
    return rootState_subState == running;
}

#endif
/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/Consumer.h
*********************************************************************/
