/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: SM_Read
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/SM_Read.h
*********************************************************************/

#ifndef SM_Read_H
#define SM_Read_H

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
//## link Log
class Logger;

//## link shm
class SHM_Connection;

//## package Web

//## class SM_Read

using namespace std;

class SM_Read {
    ////    Constructors and destructors    ////
    
public :

    //## operation SM_Read(int,char**)
    SM_Read(int argc, char** argv);
    
    //## auto_generated
    SM_Read();
    
    //## auto_generated
    ~SM_Read();
    
    ////    Additional operations    ////
    
    //## auto_generated
    Logger* getLog() const;
    
    //## auto_generated
    void setLog(Logger* p_Logger);
    
    //## auto_generated
    SHM_Connection* getShm() const;
    
    //## auto_generated
    void setShm(SHM_Connection* p_SHM_Connection);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Logger* Log;		//## link Log
    
    SHM_Connection* shm;		//## link shm
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/SM_Read.h
*********************************************************************/
