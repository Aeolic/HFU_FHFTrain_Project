/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainTestThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestThread.h
*********************************************************************/

#ifndef TrainTestThread_H
#define TrainTestThread_H

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

//## class TrainTestThread

using namespace std;

class TrainTestThread : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation TrainTestThread()
    TrainTestThread();
    
    //## auto_generated
    ~TrainTestThread();
    
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
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestThread.h
*********************************************************************/
