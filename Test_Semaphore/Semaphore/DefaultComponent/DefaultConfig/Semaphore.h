/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: langmaxm
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Semaphore
//!	Generated Date	: Mon, 05, Dec 2016  
	File Path	: DefaultComponent/DefaultConfig/Semaphore.h
*********************************************************************/

#ifndef Semaphore_H
#define Semaphore_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <oxf/omthread.h>
//## package Default

//## class Semaphore
class Semaphore : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation Semaphore(int)
    Semaphore(int startValue = 1);
    
    //## auto_generated
    ~Semaphore();
    
    ////    Operations    ////
    
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
	File Path	: DefaultComponent/DefaultConfig/Semaphore.h
*********************************************************************/
