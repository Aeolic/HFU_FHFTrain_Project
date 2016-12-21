/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: SM_Read
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/SM_Read.cpp
*********************************************************************/

//## auto_generated
#include "SM_Read.h"
//## link Log
#include "Logger.h"
//## link shm
#include "SHM_Connection.h"
//## auto_generated
#include <fstream>
//## auto_generated
#include <iostream>
//## package Web

//## class SM_Read
SM_Read::SM_Read(int argc, char** argv) {
    shm = NULL;
    Log = NULL;
    //#[ operation SM_Read(int,char**)
    shm = SHM_Connection::instance();
    int value;  
    bool hasError = false;
    
    if (argc == 3) //Write Data
    {       
    	if (strcmp(argv[1], "power") == 0)
    	{
    		value = atoi(argv[2]);
    		shm->set_target_speed(value);
    	} 
    	else
    		hasError = true;	
    }
    else if (argc == 2) // Read Data
    {
    	if (strcmp(argv[1], "power") == 0)  {                
    		float d;      
    		shm->read(Speed, d, false);
    		std::cout << d  << std::endl;  
    		
    	}
    	else if (strcmp(argv[1], "distance") == 0) 
    	{       
    		float d;      
    		shm->read(Distance, d, false); 
    		std::cout << d  << std::endl; 
    	}
    	else if (strcmp(argv[1], "ip") == 0)   
    	{
            char* ipBuff;
    		shm->read(IP, ipBuff, false);   
    		std::cout << ipBuff << std::endl; 
    	}   
    	else if (strcmp(argv[1], "all") == 0)   
    	{       
            char* ipBuff;
            float fBuff =0 ;
    		shm->read(IP, ipBuff, false);        
    		
    		std::cout <<  "{" << std::endl;  
    		                              
    		std::cout <<  "\"IP\": \"" << ipBuff << "\", "<< std::endl;   
    		              
    		shm->read(Rfid, ipBuff, false);  
    		std::cout <<  "\"RFID\": \"" << ipBuff << "\", "<< std::endl;   
    		
    		shm->read(Distance, fBuff, false);
    		std::cout << "\"Distance\": " << fBuff << ", "<< std::endl;  
    		                                                       
    		shm->read(DistanceAbs, fBuff, false);
    		std::cout << "\"DistanceAbs\": " << fBuff << ", "<< std::endl;
    		 
    		shm->read(Temperature, fBuff, false);
    		std::cout <<  "\"Temperature\": " << fBuff << ", "<< std::endl; 
    		 
    		shm->read(Speed, fBuff, false);
    		std::cout << "\"Speed\": " << fBuff << ", "<< std::endl;  
    		 
    		shm->read(AmpereMotor, fBuff, false);
    		std::cout << "\"AmpereMotor\": " << fBuff << ", "<< std::endl;  
    		 
    		shm->read(AmpereExtern, fBuff, false);
    		std::cout <<  "\"AmpereExtern\": " << fBuff << ", "<< std::endl;  
    		 
    		shm->read(VoltageMotor, fBuff, false);
    		std::cout <<  "\"VoltageMotor\": " << fBuff << ", "<< std::endl;  
    		 
    		shm->read(VoltageExtern, fBuff, false);
    		std::cout <<  "\"VoltageExtern\": " << fBuff << ", "<< std::endl;  
    		
    		//----THIS IS LAST:
    		                                                             
    		shm->read(VoltageAux, fBuff, false);
    		std::cout <<  "\"VoltageAux\": " << fBuff << " "<< std::endl; 
    
    		std::cout << "}" << std::endl;
    	} 
    	else if (strcmp(argv[1], "test") == 0)   
    	{
    		std::cout << "{ \"test\" : 12.33}" << std::endl; 
    	}
    	else
    		hasError = true;	
    }    
    else
    	hasError = true;	       
    
    if(hasError) {
    	printf("ARGC: %d\n", argc);
    	int idx = 0;
    	for(idx=0;idx<argc;idx++) {
    		printf("IDX: %d ARGV: %s\n", idx, argv[idx]);	
    	}
    	Log->error("Invalid call of parameter\n"); 
    	Log->error("onNo!\n"); 
    }	
    
    std::exit(0);                                                     
                                                         
    return;
    //#]
}

SM_Read::SM_Read() {
    Log = NULL;
    shm = NULL;
}

SM_Read::~SM_Read() {
    cleanUpRelations();
}

Logger* SM_Read::getLog() const {
    return Log;
}

void SM_Read::setLog(Logger* p_Logger) {
    Log = p_Logger;
}

SHM_Connection* SM_Read::getShm() const {
    return shm;
}

void SM_Read::setShm(SHM_Connection* p_SHM_Connection) {
    shm = p_SHM_Connection;
}

void SM_Read::cleanUpRelations() {
    if(Log != NULL)
        {
            Log = NULL;
        }
    if(shm != NULL)
        {
            shm = NULL;
        }
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/SM_Read.cpp
*********************************************************************/
