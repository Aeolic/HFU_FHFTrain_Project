/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: Semaphore
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/Semaphore.h
*********************************************************************/

#ifndef Semaphore_H
#define Semaphore_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## package Default

//## class Semaphore
class Semaphore {
    ////    Constructors and destructors    ////
    
public :

    //## operation Semaphore(int)
    Semaphore(int startValue = 1);
    
    //## auto_generated
    ~Semaphore();
    
    ////    Operations    ////
    
    //## operation giveStatus()
    void giveStatus();
    
    //## operation release()
    void release();
    
    //## operation request()
    void request();
    
    ////    Additional operations    ////
    
    //## auto_generated
    OMOSSemaphore * getS() const;
    
    //## auto_generated
    void setS(OMOSSemaphore * p_s);
    
    ////    Attributes    ////

protected :

    OMOSSemaphore * s;		//## attribute s
};

#endif
/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/Semaphore.h
*********************************************************************/
