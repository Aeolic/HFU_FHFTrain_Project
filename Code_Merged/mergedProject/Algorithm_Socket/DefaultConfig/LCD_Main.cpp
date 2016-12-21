/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: LCD_Main
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/LCD_Main.cpp
*********************************************************************/

//## link itsLcd
#include "LCD.h"
//## auto_generated
#include <unistd.h>
//## auto_generated
#include <stdio.h>
//## auto_generated
#include <iostream>
//## auto_generated
#include "LCD_Main.h"
//## link itsILCD
#include "ILCD.h"
//## link Shm
#include "SHM_Connection.h"
//## package Common

//## class LCD_Main
LCD_Main::LCD_Main(IOxfActive* theActiveContext) {
    setActiveContext(this, true);
    Shm = NULL;
    itsILCD = NULL;
    itsLcd = NULL;
    initStatechart();
    //#[ operation LCD_Main()
    Shm = SHM_Connection::instance();  
    itsLcd = new LCD();
    
    //Constants
    itsLcd->write_to_position(1,1,"-- FHF-Train SS16 --");  
    itsLcd->write_to_position(2,1,"Power:");   
    itsLcd->write_to_position(3,1,"Sys-Current:");            
    itsLcd->write_to_position(4,1,"IP: "); 
    
    sleep(2); 
    itsLcd->write_to_position(1,1,"                    "); 
    //#]
}

LCD_Main::~LCD_Main() {
    //#[ operation ~LCD_Main()
    //#]
    cleanUpRelations();
    cancelTimeouts();
}

void LCD_Main::cleanUpRelations() {
    if(Shm != NULL)
        {
            Shm = NULL;
        }
    if(itsILCD != NULL)
        {
            itsILCD = NULL;
        }
    if(itsLcd != NULL)
        {
            itsLcd = NULL;
        }
}

SHM_Connection* LCD_Main::getShm() const {
    return Shm;
}

void LCD_Main::setShm(SHM_Connection* p_SHM_Connection) {
    Shm = p_SHM_Connection;
}

ILCD* LCD_Main::getItsILCD() const {
    return itsILCD;
}

void LCD_Main::setItsILCD(ILCD* p_ILCD) {
    itsILCD = p_ILCD;
}

LCD* LCD_Main::getItsLcd() const {
    return itsLcd;
}

void LCD_Main::setItsLcd(LCD* p_LCD) {
    itsLcd = p_LCD;
}

void LCD_Main::write() {
    //#[ operation write()
    
    Shm->read(Speed, power);
    sprintf (buff, "%3d", ((int)power));
    itsLcd->write_to_position(2,7, buff);   
                              
    float temp;                         
    Shm->read(VoltageAux, power);
    Shm->read(Temperature, temp);
    sprintf (buff, "Sys:%2.2fV Temp:%2.1fC", power, temp);
    itsLcd->write_to_position(3,1, buff);   
    
    //Distance to line 1               
    Shm->read(Distance, temp);
    sprintf (buff, "Dist:%6.2fcm", temp);
    itsLcd->write_to_position(1,1, buff);  
    
                       
    Shm->read(IP, ipBuff);   
    itsLcd->write_to_position(4,4, ipBuff);
    //#]
}

char LCD_Main::getBuff(int i1) const {
    return buff[i1];
}

void LCD_Main::setBuff(int i1, char p_buff) {
    buff[i1] = p_buff;
}

char* LCD_Main::getIpBuff() const {
    return ipBuff;
}

void LCD_Main::setIpBuff(char* p_ipBuff) {
    ipBuff = p_ipBuff;
}

float LCD_Main::getPower() const {
    return power;
}

void LCD_Main::setPower(float p_power) {
    power = p_power;
}

bool LCD_Main::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    if(done)
        {
            startDispatching();
        }
    return done;
}

void LCD_Main::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void LCD_Main::cancelTimeouts() {
    cancel(rootState_timeout);
}

bool LCD_Main::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void LCD_Main::rootState_entDef() {
    {
        rootState_subState = running;
        rootState_active = running;
        rootState_timeout = scheduleTimeout(1000, NULL);
    }
}

IOxfReactive::TakeEventStatus LCD_Main::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    // State running
    if(rootState_active == running)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            cancel(rootState_timeout);
                            //#[ transition 1 
                            write();
                            //#]
                            rootState_subState = running;
                            rootState_active = running;
                            rootState_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/LCD_Main.cpp
*********************************************************************/
