/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: RFID_T 
	Configuration 	: RFID_T
	Model Element	: Motor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: RFID_T/RFID_T/Motor.h
*********************************************************************/

#ifndef Motor_H
#define Motor_H

//## auto_generated
#include <oxf/oxf.h>
//## class Motor
#include "IMotor.h"
//## auto_generated
#include "Train.h"
//## operation setPower(speed,float)
#include "Common.h"
//## link itsAltera
class Altera;

//## package Train

//## class Motor
class Motor : public IMotor {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    virtual ~Motor();
    
    ////    Operations    ////
    
    //## operation setPower(speed,float)
    virtual void setPower(const speed& s, float distance);
    
    ////    Additional operations    ////
    
    //## auto_generated
    Altera* getItsAltera() const;
    
    //## auto_generated
    void setItsAltera(Altera* p_Altera);

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////
    
    Altera* itsAltera;		//## link itsAltera

public :

    //## operation Motor()
    Motor();
    
    //## auto_generated
    float getCmProS() const;
    
    //## auto_generated
    void setCmProS(float p_cmProS);
    
    //## auto_generated
    int getCnt() const;
    
    //## auto_generated
    void setCnt(int p_cnt);
    
    //## auto_generated
    float getConstPower() const;
    
    //## auto_generated
    void setConstPower(float p_constPower);
    
    //## auto_generated
    suseconds_t getDTime() const;
    
    //## auto_generated
    void setDTime(suseconds_t p_dTime);
    
    //## auto_generated
    float getE() const;
    
    //## auto_generated
    void setE(float p_e);
    
    //## auto_generated
    float getENum() const;
    
    //## auto_generated
    void setENum(float p_eNum);
    
    //## auto_generated
    float getKi() const;
    
    //## auto_generated
    void setKi(float p_ki);
    
    //## auto_generated
    float getKp() const;
    
    //## auto_generated
    void setKp(float p_kp);
    
    //## auto_generated
    float getOffset() const;
    
    //## auto_generated
    void setOffset(float p_offset);
    
    //## auto_generated
    float getOldDistance() const;
    
    //## auto_generated
    void setOldDistance(float p_oldDistance);
    
    //## auto_generated
    timeval* getOldTimeVal() const;
    
    //## auto_generated
    void setOldTimeVal(timeval* p_oldTimeVal);
    
    //## auto_generated
    float getTa() const;
    
    //## auto_generated
    void setTa(float p_ta);
    
    //## auto_generated
    timeval* getTimeVal() const;
    
    //## auto_generated
    void setTimeVal(timeval* p_timeVal);
    
    //## auto_generated
    bool getUeber() const;
    
    //## auto_generated
    void setUeber(bool p_ueber);
    
    //## auto_generated
    float getY() const;
    
    //## auto_generated
    void setY(float p_y);

protected :

    float cmProS;		//## attribute cmProS
    
    int cnt;		//## attribute cnt
    
    float constPower;		//## attribute constPower
    
    suseconds_t dTime;		//## attribute dTime
    
    float e;		//## attribute e
    
    float eNum;		//## attribute eNum
    
    float ki;		//## attribute ki
    
    float kp;		//## attribute kp
    
    float offset;		//## attribute offset
    
    float oldDistance;		//## attribute oldDistance
    
    timeval* oldTimeVal;		//## attribute oldTimeVal
    
    float ta;		//## attribute ta
    
    timeval* timeVal;		//## attribute timeVal
    
    bool ueber;		//## attribute ueber
    
    float y;		//## attribute y
};

#endif
/*********************************************************************
	File Path	: RFID_T/RFID_T/Motor.h
*********************************************************************/
