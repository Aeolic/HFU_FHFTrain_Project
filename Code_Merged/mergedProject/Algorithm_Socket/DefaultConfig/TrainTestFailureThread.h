/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainTestFailureThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestFailureThread.h
*********************************************************************/

#ifndef TrainTestFailureThread_H
#define TrainTestFailureThread_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include <oxf/omthread.h>
//## link itsTrainTestCommunication
class TrainTestCommunication;

//## link itsTrainTestOrder
class TrainTestOrder;

//## package TrainTest

//## class TrainTestFailureThread

using namespace std;

class TrainTestFailureThread : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation TrainTestFailureThread()
    TrainTestFailureThread();
    
    //## auto_generated
    ~TrainTestFailureThread();
    
    ////    Operations    ////
    
    //## operation execute()
    OMReactive* execute();
    
    ////    Additional operations    ////
    
    //## auto_generated
    TrainTestCommunication* getItsTrainTestCommunication() const;
    
    //## auto_generated
    void setItsTrainTestCommunication(TrainTestCommunication* p_TrainTestCommunication);
    
    //## auto_generated
    TrainTestOrder* getItsTrainTestOrder() const;
    
    //## auto_generated
    void setItsTrainTestOrder(TrainTestOrder* p_TrainTestOrder);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    TrainTestCommunication* itsTrainTestCommunication;		//## link itsTrainTestCommunication
    
    TrainTestOrder* itsTrainTestOrder;		//## link itsTrainTestOrder
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestFailureThread.h
*********************************************************************/
