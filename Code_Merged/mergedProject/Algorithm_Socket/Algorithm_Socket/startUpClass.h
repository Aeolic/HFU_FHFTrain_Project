/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: startUpClass
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/startUpClass.h
*********************************************************************/

#ifndef startUpClass_H
#define startUpClass_H

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
#include "Socket.h"
//## auto_generated
#include "SocketException.h"
//## link itsPiAlgorithm
class PiAlgorithm;

//## link itsTrainListenerThread
class TrainListenerThread;

//## link itsTrainThread
class TrainThread;

//## package Socket

//## class startUpClass

using namespace std;

class startUpClass {
    ////    Constructors and destructors    ////
    
public :

    //## operation startUpClass()
    startUpClass();
    
    //## auto_generated
    ~startUpClass();
    
    ////    Additional operations    ////
    
    //## auto_generated
    PiAlgorithm* getItsPiAlgorithm() const;
    
    //## auto_generated
    void setItsPiAlgorithm(PiAlgorithm* p_PiAlgorithm);
    
    //## auto_generated
    TrainListenerThread* getItsTrainListenerThread() const;
    
    //## auto_generated
    void setItsTrainListenerThread(TrainListenerThread* p_TrainListenerThread);
    
    //## auto_generated
    TrainThread* getItsTrainThread() const;
    
    //## auto_generated
    void setItsTrainThread(TrainThread* p_TrainThread);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    PiAlgorithm* itsPiAlgorithm;		//## link itsPiAlgorithm
    
    TrainListenerThread* itsTrainListenerThread;		//## link itsTrainListenerThread
    
    TrainThread* itsTrainThread;		//## link itsTrainThread
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/startUpClass.h
*********************************************************************/
