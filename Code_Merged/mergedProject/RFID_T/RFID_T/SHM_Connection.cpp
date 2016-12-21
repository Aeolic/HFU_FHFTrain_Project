/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: RFID_T 
	Configuration 	: RFID_T
	Model Element	: SHM_Connection
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: RFID_T/RFID_T/SHM_Connection.cpp
*********************************************************************/

//## auto_generated
#include <semaphore.h>
//## auto_generated
#include <string>
//## auto_generated
#include <fcntl.h>
//## auto_generated
#include <sys/ipc.h>
//## auto_generated
#include <sys/shm.h>
//## auto_generated
#include <sys/stat.h>
//## auto_generated
#include <sys/mman.h>
//## auto_generated
#include <stdio.h>
//## auto_generated
#include <errno.h>
//## auto_generated
#include <iostream>
//## auto_generated
#include <algorithm>
//## auto_generated
#include "SHM_Connection.h"
//key_t shm_key;

//## dependency types
#include <sys/types.h>
//## dependency ifaddrs
#include <ifaddrs.h>
//## dependency netdb
#include <netdb.h>
//## auto_generated
#include <string.h>
//## auto_generated
#include <stdlib.h>
//## auto_generated
#include <unistd.h>
//## auto_generated
#include <termio.h>
//## auto_generated
#include <sys/socket.h>
//## auto_generated
#include <net/if.h>
//## auto_generated
#include <netinet/in.h>
//## package Common

//## class SHM_Connection
std::string SHM_Connection::sem_name("/FHFtrain_sem");

SHM_Connection::SHM_Connection() {
    //#[ operation SHM_Connection()
    
    int errno;
    int shm_id = shmget(SHM_KEY, sizeof(*data), IPC_CREAT | 0777 | S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP);
    
    if (shm_id <  0)
    	shm_id = shmget(SHM_KEY, sizeof(*data), IPC_CREAT | 0777 | S_IRUSR|S_IWUSR|S_IRGRP|S_IWGRP);
    
    if (shm_id < 0)
    	/*exception*/
    	perror("Error create shared memory");     
    	
    	
    data =(shm_data*) shmat(shm_id, 0, 0);//mmap(NULL, sizeof(*data), PROT_READ | PROT_WRITE, MAP_SHARED, shm_id, 0);
    
    if (!data)
    	perror("Error add data into memory");     
    	
    	
    	
    sema = sem_open("SemaName", O_CREAT, 777 , 1);
    
    if (!sema)
    	perror("Error create semaphore");
    	
    sprintf(data->ip, "Not read yet.");
    //#]
}

SHM_Connection::~SHM_Connection() {
    //#[ operation ~SHM_Connection()
    shmdt(data);
    sem_close(sema);
    
    //#]
}

SHM_Connection* SHM_Connection::instance() {
    //#[ operation instance()
    static SHM_Connection singleton;
    return &singleton;
    //#]
}

void SHM_Connection::set_target_speed(const speed& s) {
    //#[ operation set_target_speed(speed)
    sem_wait(sema);
    data->target_speed = s;
    sem_post(sema);
    //#]
}

speed SHM_Connection::target_speed() {
    //#[ operation target_speed()
    speed retval;
    //	sem_wait(sema);
    retval = data->target_speed;
    //	sem_post(sema);
    
    return retval;
    
    //#]
}

shm_data* SHM_Connection::getData() const {
    return data;
}

void SHM_Connection::setData(shm_data* p_data) {
    data = p_data;
}

std::string SHM_Connection::getSem_name() {
    return sem_name;
}

sem_t* SHM_Connection::getSema() const {
    return sema;
}

void SHM_Connection::read(const Type& type, float& value, bool useSema) {
    //#[ operation read(Type,float,bool)
    if(useSema)
    	sem_wait(sema);
    switch (type){    
    	case BeforeSpeed:
    		value = data->beforeSpeed;
    		break;
        case AfterSpeed:
    		value = data->AfterSpeed;
    		break;
    	case TagUntil:
    		value = data->TagUntil;
    		break;
    	case LastTag:
    		value = data->LastTag;
    		break;
    	case Speed: 
    		value = data->target_speed; 
    		break;
    	case Temperature:
    		value = data->temperature ;
    		break;
    	case VoltageExtern:
    		value = data->voltageExtern ;
    		break;
    	case VoltageMotor:
    		value = data->voltageMotor;
    		break;  
    	case VoltageAux:
    		value = data->voltageAux;
    		break;
    	case AmpereMotor:
    		value = data->ampereMotor;
    		break;  
    	case Distance:
    		value = data->distance;
    		break;  
    	case DistanceAbs:
    		value = data->distanceAbs;
    		break;
    	case DistanceTicks:
    		value = data->distanceTicks;
    		break;
    	default:
    	#ifdef DEBUG
    		std::cout << "ERROR: No type could be found!" << std..endl;
    	#endif
    		break;
    }
    if(useSema)
    	sem_post(sema);
    //#]
}

void SHM_Connection::read(const Type& type, char*& value, bool useSema) {
    //#[ operation read(Type,char*,bool)
    if(useSema)
    	sem_wait(sema);
    switch (type){ 
    	case 2: 
    		value = data->ip; 
    		break;  
    	case 12: 
    		strncpy(value,data->rfid,sizeof(data->rfid)); 
    		break;
    	default:
    	#ifdef DEBUG
    		std::cout << "ERROR: No type could be found!" << std..endl;
    	#endif
    		break;
    }
    if(useSema)
    	sem_post(sema);
    //#]
}

void SHM_Connection::save(const Type& type, float value) {
    //#[ operation save(Type,float)
    sem_wait(sema);
    switch (type){    
    
        case BeforeSpeed:
    		data->beforeSpeed = value; 
    		break;
        case AfterSpeed:
    		data->AfterSpeed = value; 
    		break;
    	case TagUntil:
    		data->TagUntil = value; 
    		break;
    	case LastTag:
    		data->LastTag = value; 
    		break;
    
    
    	case Speed: 
    		data->target_speed = value; 
    		break;
    	case Temperature:
    		data->temperature = value;
    		break;
    	case VoltageExtern:
    		data->voltageExtern = value;
    		break;
    	case VoltageMotor:
    		data->voltageMotor = value;
    		break;   
    	case VoltageAux:
    		data->voltageAux = value;
    		break;
    	case AmpereExtern:
    		data->ampereExtern = value;
    		break;
    	case AmpereMotor:
    		data->ampereMotor = value;
    		break; 
    	case Distance:
    		data->distance = value;
    		break;
    	case DistanceAbs:
    		data->distanceAbs = value;
    		break;   
    	case DistanceTicks:
    		data->distanceTicks = value;
    		break;
    	default:
    	#ifdef DEBUG
    		std::cout << "ERROR: No type could be found!" << std..endl;
    	#endif
    		break;
    }
    sem_post(sema);
    //#]
}

void SHM_Connection::save(const Type& type, char* value) {
    //#[ operation save(Type,char*)
    sem_wait(sema);
    switch (type){ 
    	case 2: 
    		for(int i = 0; i < 15; i++)
    		   data->ip[i] = value[i];
    		break; 
    	case 12: 
    		for(int i = 0; i < sizeof(data->rfid); i++)
    		   data->rfid[i] = value[i];
    		break;
    	default:
    	#ifdef DEBUG
    		std::cout << "ERROR: No type could be found!" << std..endl;
    	#endif
    		break;
    }
    sem_post(sema);
    //#]
}

void SHM_Connection::setSem_name(std::string p_sem_name) {
    sem_name = p_sem_name;
}

void SHM_Connection::setSema(sem_t* p_sema) {
    sema = p_sema;
}

/*********************************************************************
	File Path	: RFID_T/RFID_T/SHM_Connection.cpp
*********************************************************************/
