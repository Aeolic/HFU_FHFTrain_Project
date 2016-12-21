/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: RFID_W 
	Configuration 	: RFID_W
	Model Element	: SHM_Connection
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: RFID_W/RFID_W/SHM_Connection.h
*********************************************************************/

#ifndef SHM_Connection_H
#define SHM_Connection_H

//## auto_generated
#include <oxf/oxf.h>
//## dependency semaphore
#include <semaphore.h>
//## dependency string
#include <string.h>
//## dependency iostream
#include <iostream>
//## auto_generated
#include "Common.h"
//## dependency std
using namespace std;

//## package Common

//## class SHM_Connection
class SHM_Connection {
    ////    Constructors and destructors    ////
    
public :

    //## operation SHM_Connection()
    SHM_Connection();
    
    //## operation ~SHM_Connection()
    ~SHM_Connection();
    
    ////    Operations    ////
    
    //## operation instance()
    static SHM_Connection* instance();
    
    //## operation set_target_speed(speed)
    void set_target_speed(const speed& s);
    
    //## operation target_speed()
    speed target_speed();
    
    ////    Additional operations    ////

private :

    //## auto_generated
    shm_data* getData() const;
    
    //## auto_generated
    void setData(shm_data* p_data);
    
    //## auto_generated
    sem_t* getSema() const;
    
    ////    Attributes    ////

protected :

    shm_data* data;		//## attribute data
    
    sem_t* sema;		//## attribute sema
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////

private :

    //## auto_generated
    static std::string getSem_name();

protected :

    static std::string sem_name;		//## attribute sem_name

public :

    //## operation read(Type,float,bool)
    void read(const Type& type, float& value, bool useSema = true);
    
    //## operation read(Type,char*,bool)
    void read(const Type& type, char*& value, bool useSema = true);
    
    //## operation save(Type,float)
    void save(const Type& type, float value);
    
    //## operation save(Type,char*)
    void save(const Type& type, char* value);

private :

    //## auto_generated
    static void setSem_name(std::string p_sem_name);
    
    //## auto_generated
    void setSema(sem_t* p_sema);
};

#endif
/*********************************************************************
	File Path	: RFID_W/RFID_W/SHM_Connection.h
*********************************************************************/
