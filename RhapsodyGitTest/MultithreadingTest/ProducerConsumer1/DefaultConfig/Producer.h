/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: Producer
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/Producer.h
*********************************************************************/

#ifndef Producer_H
#define Producer_H

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
//## operation Producer(Buffer*)
class Buffer;

//## package Default

//## class Producer
class Producer : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## operation Producer(Buffer*)
    Producer(Buffer* buff, IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    Producer(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Producer();
    
    ////    Operations    ////
    
    //## operation write()
    void write();
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getNum() const;
    
    //## auto_generated
    void setNum(int p_num);
    
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
    
    int num;		//## attribute num
    
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
    
    // running:
    //## statechart_method
    inline bool running_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Producer_Enum {
        OMNonState = 0,
        running = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool Producer::rootState_IN() const {
    return true;
}

inline bool Producer::running_IN() const {
    return rootState_subState == running;
}

#endif
/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/Producer.h
*********************************************************************/
