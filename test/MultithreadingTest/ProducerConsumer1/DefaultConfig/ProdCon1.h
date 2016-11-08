/*********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: ProdCon1
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/ProdCon1.h
*********************************************************************/

#ifndef ProdCon1_H
#define ProdCon1_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "Default.h"
//## link itsBuffer
class Buffer;

//## link itsConsumer
class Consumer;

//## link itsProducer
class Producer;

//## package Default

//## class ProdCon1
class ProdCon1 {
    ////    Constructors and destructors    ////
    
public :

    //## operation ProdCon1()
    ProdCon1();
    
    //## auto_generated
    ~ProdCon1();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Buffer* getItsBuffer() const;
    
    //## auto_generated
    void setItsBuffer(Buffer* p_Buffer);
    
    //## auto_generated
    Consumer* getItsConsumer() const;
    
    //## auto_generated
    void setItsConsumer(Consumer* p_Consumer);
    
    //## auto_generated
    Producer* getItsProducer() const;
    
    //## auto_generated
    void setItsProducer(Producer* p_Producer);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Buffer* itsBuffer;		//## link itsBuffer
    
    Consumer* itsConsumer;		//## link itsConsumer
    
    Producer* itsProducer;		//## link itsProducer
};

#endif
/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/ProdCon1.h
*********************************************************************/
