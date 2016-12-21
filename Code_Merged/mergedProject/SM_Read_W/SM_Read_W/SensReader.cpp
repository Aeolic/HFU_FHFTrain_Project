/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_W 
	Configuration 	: SM_Read_W
	Model Element	: SensReader
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_W/SM_Read_W/SensReader.cpp
*********************************************************************/

//## auto_generated
#include "SensReader.h"
//## link itsSensor
#include "ISensor.h"
//## link itsSHM_Connection
#include "SHM_Connection.h"
//## package Common

//## class SensReader
SensReader::SensReader() {
    itsSHM_Connection = NULL;
    itsSensor = NULL;
    //#[ operation SensReader()
    printf("Starting Sensor-Reader\n"); 
    
    
    itsSensor = new Sensor();             
    itsSHM_Connection = SHM_Connection::instance();    
    while(1){  
    	read();
    	usleep(1000*10);
    }
                                                                                             
    //#]
}

SensReader::~SensReader() {
    cleanUpRelations();
}

void SensReader::read() {
    //#[ operation read()
    itsSensor->updateDistance();
    //printf("read: %1.4f",itsSensor->getDistance()); 
    float test = 0.0;     
    itsSHM_Connection->save(Distance, itsSensor->getDistance());
    itsSHM_Connection->read(Distance,test);
    //printf("readSHM: %1.4f\n",test);
    itsSHM_Connection->save(DistanceTicks, itsSensor->getDistanceTicks());
    itsSHM_Connection->save(DistanceAbs, itsSensor->getDistanceAbs()); 
    
    itsSHM_Connection->save(Temperature, itsSensor->getTemperature());  
    
    itsSHM_Connection->save(VoltageMotor, itsSensor->getVoltageMotor());
    itsSHM_Connection->save(AmpereMotor, itsSensor->getAmpereMotor());  
    
    itsSHM_Connection->save(VoltageExtern, itsSensor->getVoltageExtern());
    itsSHM_Connection->save(AmpereExtern, itsSensor->getAmpereExtern());   
                                                                         
    itsSHM_Connection->save(VoltageAux, itsSensor->getVoltageAux());
          
    
    char* ipBufP = ipBuffer;          
    itsSensor->getIP(ipBufP);
    itsSHM_Connection->save(IP, ipBufP);
    
    #ifdef NOTDEFINED                     
     //DEBUG-Output                     
    	float shmTemp, shmTempB;
    	
    	printf("\n\n");
    	                                                   
    	itsSHM_Connection->read(VoltageMotor, shmTemp);    
    	itsSHM_Connection->read(AmpereMotor, shmTempB);
    	printf("Motor:  %2.3fV, %2.3fA\n", shmTemp, shmTempB); 
    	  
    	itsSHM_Connection->read(VoltageExtern, shmTemp); 
    	itsSHM_Connection->read(AmpereExtern, shmTempB);  
    	printf("Extern: %2.3fV, %2.3fA\n\n", shmTemp, shmTempB); 
    	                                              
    	itsSHM_Connection->read(VoltageAux, shmTemp);
    	printf("Voltage Aux: %2.3fV\n", shmTemp);
    	
    	itsSHM_Connection->read(Temperature, shmTemp);
    	printf("Temperature: %2.3fC\n", shmTemp); 
    	
    	char* ipBuff;   
    	itsSHM_Connection->read(IP, ipBuff);
    	printf("IP: %s", ipBuff);    
          
    #endif
    
    //#]
}

char SensReader::getIpBuffer(int i1) const {
    return ipBuffer[i1];
}

void SensReader::setIpBuffer(int i1, char p_ipBuffer) {
    ipBuffer[i1] = p_ipBuffer;
}

SHM_Connection* SensReader::getItsSHM_Connection() const {
    return itsSHM_Connection;
}

void SensReader::setItsSHM_Connection(SHM_Connection* p_SHM_Connection) {
    itsSHM_Connection = p_SHM_Connection;
}

ISensor* SensReader::getItsSensor() const {
    return itsSensor;
}

void SensReader::setItsSensor(ISensor* p_ISensor) {
    itsSensor = p_ISensor;
}

void SensReader::cleanUpRelations() {
    if(itsSHM_Connection != NULL)
        {
            itsSHM_Connection = NULL;
        }
    if(itsSensor != NULL)
        {
            itsSensor = NULL;
        }
}

/*********************************************************************
	File Path	: SM_Read_W/SM_Read_W/SensReader.cpp
*********************************************************************/
