/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: SHM_Tag_Listener
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/SHM_Tag_Listener.h
*********************************************************************/

#ifndef SHM_Tag_Listener_H
#define SHM_Tag_Listener_H

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
#include "TrainCommunicationPackage.h"
//## link itsSHM_Connection
class SHM_Connection;

//## link itsTrainCommunication
class TrainCommunication;

//## package TrainCommunicationPackage

//## class SHM_Tag_Listener

using namespace std;

class SHM_Tag_Listener {
    ////    Constructors and destructors    ////
    
public :

    //## operation SHM_Tag_Listener()
    SHM_Tag_Listener();
    
    //## auto_generated
    ~SHM_Tag_Listener();
    
    ////    Operations    ////
    
    //## operation execute()
    OMReactive* execute();
    
    ////    Additional operations    ////
    
    //## auto_generated
    SHM_Connection* getItsSHM_Connection() const;
    
    //## auto_generated
    void setItsSHM_Connection(SHM_Connection* p_SHM_Connection);
    
    //## auto_generated
    TrainCommunication* getItsTrainCommunication() const;
    
    //## auto_generated
    void setItsTrainCommunication(TrainCommunication* p_TrainCommunication);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    SHM_Connection* itsSHM_Connection;		//## link itsSHM_Connection
    
    TrainCommunication* itsTrainCommunication;		//## link itsTrainCommunication
    
    ////    Framework operations    ////

public :

    //## auto_generated
    void __setItsTrainCommunication(TrainCommunication* p_TrainCommunication);
    
    //## auto_generated
    void _setItsTrainCommunication(TrainCommunication* p_TrainCommunication);
    
    //## auto_generated
    void _clearItsTrainCommunication();
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/SHM_Tag_Listener.h
*********************************************************************/
