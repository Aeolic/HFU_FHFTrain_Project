/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_W 
	Configuration 	: SM_Read_W
	Model Element	: SM_Read
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_W/SM_Read_W/SM_Read.h
*********************************************************************/

#ifndef SM_Read_H
#define SM_Read_H

//## auto_generated
#include <oxf/oxf.h>
//## link Log
class Logger;

//## link shm
class SHM_Connection;

//## package Web

//## class SM_Read
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
	File Path	: SM_Read_W/SM_Read_W/SM_Read.h
*********************************************************************/
