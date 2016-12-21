/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: RFID_W 
	Configuration 	: RFID_W
	Model Element	: LCD_Main
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: RFID_W/RFID_W/LCD_Main.h
*********************************************************************/

#ifndef LCD_Main_H
#define LCD_Main_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <oxf/omthread.h>
//## auto_generated
#include "Common.h"
//## auto_generated
#include <oxf/omreactive.h>
//## auto_generated
#include <oxf/state.h>
//## auto_generated
#include <oxf/event.h>
//## link itsILCD
class ILCD;

//## link Shm
class SHM_Connection;

//## link itsLcd
class LCD;

//## package Common

//## class LCD_Main
class LCD_Main : public OMThread, public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## operation LCD_Main()
    LCD_Main(IOxfActive* theActiveContext = 0);
    
    //## operation ~LCD_Main()
    ~LCD_Main();
    
    ////    Additional operations    ////

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    ////    Framework operations    ////

public :

    //## auto_generated
    SHM_Connection* getShm() const;
    
    //## auto_generated
    void setShm(SHM_Connection* p_SHM_Connection);
    
    //## auto_generated
    ILCD* getItsILCD() const;
    
    //## auto_generated
    void setItsILCD(ILCD* p_ILCD);
    
    //## auto_generated
    LCD* getItsLcd() const;
    
    //## auto_generated
    void setItsLcd(LCD* p_LCD);

protected :

    SHM_Connection* Shm;		//## link Shm
    
    ILCD* itsILCD;		//## link itsILCD
    
    LCD* itsLcd;		//## link itsLcd

public :

    //## operation write()
    void write();
    
    //## auto_generated
    char getBuff(int i1) const;
    
    //## auto_generated
    void setBuff(int i1, char p_buff);
    
    //## auto_generated
    char* getIpBuff() const;
    
    //## auto_generated
    void setIpBuff(char* p_ipBuff);
    
    //## auto_generated
    float getPower() const;
    
    //## auto_generated
    void setPower(float p_power);
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    char buff[3];		//## attribute buff
    
    char* ipBuff;		//## attribute ipBuff
    
    float power;		//## attribute power

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // running:
    //## statechart_method
    inline bool running_IN() const;

protected :

//#[ ignore
    enum LCD_Main_Enum {
        OMNonState = 0,
        running = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool LCD_Main::rootState_IN() const {
    return true;
}

inline bool LCD_Main::running_IN() const {
    return rootState_subState == running;
}

#endif
/*********************************************************************
	File Path	: RFID_W/RFID_W/LCD_Main.h
*********************************************************************/
