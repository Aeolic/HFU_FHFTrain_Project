/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SensRead_W 
	Configuration 	: SensRead_W
	Model Element	: Observer
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SensRead_W/SensRead_W/Observer.cpp
*********************************************************************/

//## auto_generated
#include "Observer.h"
//## link itsSHM_Connection
#include "SHM_Connection.h"
//## package Common

//## class Observer
Observer::Observer() {
    itsSHM_Connection = NULL;
    //#[ operation Observer()
    itsSHM_Connection = SHM_Connection::instance();
    //#]
}

Observer::~Observer() {
    cleanUpRelations();
}

void Observer::notify(char* rfidCode) {
    //#[ operation notify(char*)
    std::cout << "Got RFID-Code: " << rfidCode << std::endl;
    if(strcmp(rfidCode, "HB181EE14") == 0){
         itsSHM_Connection->save(LastTag,0.0);    
    
        
    }       
    else if(strcmp(rfidCode, "H0883EE14") == 0){
          itsSHM_Connection->save(LastTag,0.5);
    }
    else if(strcmp(rfidCode, "HB283EE14") == 0){   
          itsSHM_Connection->save(LastTag,1.0);
    }      
    else if(strcmp(rfidCode, "H5D82EE14") == 0){   
    	   itsSHM_Connection->save(LastTag,1.5);
    }                
    else if(strcmp(rfidCode, "HF784EE14") == 0){
           itsSHM_Connection->save(LastTag,2.0);
    }      
    else if(strcmp(rfidCode, "HB881EE14") == 0){
           itsSHM_Connection->save(LastTag,2.5);
    }                  
    else if(strcmp(rfidCode, "H5084EE14") == 0){
           itsSHM_Connection->save(LastTag,3.0);
    }   
    else if(strcmp(rfidCode, "H1281EE14") == 0){
          	itsSHM_Connection->save(LastTag,3.5);
    }  
    else if(strcmp(rfidCode, "H91FF9815") == 0){
            // itsSHM_Connection->save(LastTag,0.0);  
            printf("Not implemented.");
    }
    else if(strcmp(rfidCode, "H8B85EE14") == 0){
             //itsSHM_Connection->save(LastTag,0.0);   
             printf("Not implemented.");
    }  
    else {
     	printf("Unknown RFID-Code! '%s'\n", rfidCode);
    }         
    
            executeOrder();     
            
            
    //#]
}

float Observer::getPwr() const {
    return pwr;
}

void Observer::setPwr(float p_pwr) {
    pwr = p_pwr;
}

char Observer::getRfidBuf(int i1) const {
    return rfidBuf[i1];
}

void Observer::setRfidBuf(int i1, char p_rfidBuf) {
    rfidBuf[i1] = p_rfidBuf;
}

SHM_Connection* Observer::getItsSHM_Connection() const {
    return itsSHM_Connection;
}

void Observer::setItsSHM_Connection(SHM_Connection* p_SHM_Connection) {
    itsSHM_Connection = p_SHM_Connection;
}

void Observer::cleanUpRelations() {
    if(itsSHM_Connection != NULL)
        {
            itsSHM_Connection = NULL;
        }
}

void Observer::executeOrder() {
    //#[ operation executeOrder()
                                           
             float tUntil;
             float tLast; 
             float speedAfter;
             itsSHM_Connection->read(TagUntil,tUntil,false);
             itsSHM_Connection->read(LastTag,tLast,false);  
             itsSHM_Connection->read(AfterSpeed,speedAfter,false);     
             if(tUntil==tLast){             
             itsSHM_Connection->save(Speed,speedAfter);
               }
             
    //#]
}

/*********************************************************************
	File Path	: SensRead_W/SensRead_W/Observer.cpp
*********************************************************************/
