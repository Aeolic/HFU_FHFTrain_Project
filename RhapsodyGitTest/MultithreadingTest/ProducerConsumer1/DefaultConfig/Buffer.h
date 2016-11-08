/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: Buffer
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/Buffer.h
*********************************************************************/

#ifndef Buffer_H
#define Buffer_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## link itsFree
class Semaphore;

//## package Default

//## class Buffer
class Buffer {
    ////    Constructors and destructors    ////
    
public :

    //## operation Buffer()
    Buffer();
    
    //## auto_generated
    ~Buffer();
    
    ////    Operations    ////
    
    //## operation get()
    int get();
    
    //## operation put(int)
    void put(int arg);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getCounter() const;
    
    //## auto_generated
    void setCounter(int p_counter);
    
    //## auto_generated
    int getCounter2() const;
    
    //## auto_generated
    void setCounter2(int p_counter2);
    
    //## auto_generated
    int getMyInts(int i1) const;
    
    //## auto_generated
    void setMyInts(int i1, int p_myInts);
    
    //## auto_generated
    Semaphore* getItsFree() const;
    
    //## auto_generated
    void setItsFree(Semaphore* p_Semaphore);
    
    //## auto_generated
    Semaphore* getItsUsed() const;
    
    //## auto_generated
    void setItsUsed(Semaphore* p_Semaphore);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Attributes    ////
    
    int counter;		//## attribute counter
    
    int counter2;		//## attribute counter2
    
    int myInts[10];		//## attribute myInts
    
    ////    Relations and components    ////
    
    Semaphore* itsFree;		//## link itsFree
    
    Semaphore* itsUsed;		//## link itsUsed
};

#endif
/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/Buffer.h
*********************************************************************/
