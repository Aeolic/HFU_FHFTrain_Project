/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: Motor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/Motor.cpp
*********************************************************************/

//## auto_generated
#include "Motor.h"
//## link itsAltera
#include "Altera.h"
//## auto_generated
#include <sched.h>
//## auto_generated
#include <pthread.h>
//## auto_generated
#include <fcntl.h>
//## auto_generated
#include <sys/stat.h>
//## auto_generated
#include <semaphore.h>
//## auto_generated
#include <sys/time.h>
//## auto_generated
#include <iostream>
//## package Train

//## class Motor
Motor::~Motor() {
    cleanUpRelations();
}

void Motor::setPower(const speed& s, float distance) {
    //#[ operation setPower(speed,float)
    /*float test = 0;  
    if(cnt++==20) {
    	           
    	cnt=0;
    	gettimeofday(timeVal,NULL); 
    	dTime = timeVal->tv_usec/1000;
    	timeVal->tv_usec = 0;
    	timeVal->tv_sec = 0;
    	settimeofday(timeVal,NULL);
    	//readSpeed(); 
    
    //	if(oldTimeVal != NULL) 
    //		dTime = (timeVal->tv_usec - oldTimeVal->tv_usec)/1000;
    //	else 
    //		dTime = timeVal->tv_usec/1000; 
    
    	
    	cmProS =  (distance  - oldDistance)/(dTime/1000.0f); 
    	test =   (distance  - oldDistance);
    	e =  s - cmProS  ;
    	eNum = eNum + e;
    	oldDistance = distance;
    	*oldTimeVal = *timeVal;
    	if(dTime > 0){
    		y += kp * e + ki * ta * eNum;
    		
    		
    		
    	//printf("y: %4.4f\n",y);  
    	
    		if(y >= 60)
    			y = 60;
    		if(y <= -60)
    		y = -60;
    		ueber = false;
    //		printf("cmProS: %04.4f e: %04.4f eNum: %04.4f distance: %04.4f y: %04.4f time: %04.4f\n",cmProS,e,eNum,test,y,dTime/1000.0f);     
        }else{
        	 //printf("uberlauf\n");
        	 ueber = true;
        }
      }   
      if(s > 0 && y > 0)                  
    		itsAltera->set_power((int)y);  
      if(s < 0 && y < 0) 
      		if(ueber == false){
      			ueber = true;
      			itsAltera->set_power(0); 
      		}
    */        
    itsAltera->set_power((int)s); 
    //#]
}

Altera* Motor::getItsAltera() const {
    return itsAltera;
}

void Motor::setItsAltera(Altera* p_Altera) {
    itsAltera = p_Altera;
}

void Motor::cleanUpRelations() {
    if(itsAltera != NULL)
        {
            itsAltera = NULL;
        }
}

Motor::Motor() : cmProS(0.0), cnt(0), constPower(16), e(0.0), eNum(0.0), ki(0.2), kp(0.5), offset(4.0), oldDistance(0.0), ta(0.51), ueber(false), y(0.0) {
    itsAltera = NULL;
    //#[ operation Motor()
    timeVal = new timeval;
    oldTimeVal = new timeval;
    //#]
}

float Motor::getCmProS() const {
    return cmProS;
}

void Motor::setCmProS(float p_cmProS) {
    cmProS = p_cmProS;
}

int Motor::getCnt() const {
    return cnt;
}

void Motor::setCnt(int p_cnt) {
    cnt = p_cnt;
}

float Motor::getConstPower() const {
    return constPower;
}

void Motor::setConstPower(float p_constPower) {
    constPower = p_constPower;
}

suseconds_t Motor::getDTime() const {
    return dTime;
}

void Motor::setDTime(suseconds_t p_dTime) {
    dTime = p_dTime;
}

float Motor::getE() const {
    return e;
}

void Motor::setE(float p_e) {
    e = p_e;
}

float Motor::getENum() const {
    return eNum;
}

void Motor::setENum(float p_eNum) {
    eNum = p_eNum;
}

float Motor::getKi() const {
    return ki;
}

void Motor::setKi(float p_ki) {
    ki = p_ki;
}

float Motor::getKp() const {
    return kp;
}

void Motor::setKp(float p_kp) {
    kp = p_kp;
}

float Motor::getOffset() const {
    return offset;
}

void Motor::setOffset(float p_offset) {
    offset = p_offset;
}

float Motor::getOldDistance() const {
    return oldDistance;
}

void Motor::setOldDistance(float p_oldDistance) {
    oldDistance = p_oldDistance;
}

timeval* Motor::getOldTimeVal() const {
    return oldTimeVal;
}

void Motor::setOldTimeVal(timeval* p_oldTimeVal) {
    oldTimeVal = p_oldTimeVal;
}

float Motor::getTa() const {
    return ta;
}

void Motor::setTa(float p_ta) {
    ta = p_ta;
}

timeval* Motor::getTimeVal() const {
    return timeVal;
}

void Motor::setTimeVal(timeval* p_timeVal) {
    timeVal = p_timeVal;
}

bool Motor::getUeber() const {
    return ueber;
}

void Motor::setUeber(bool p_ueber) {
    ueber = p_ueber;
}

float Motor::getY() const {
    return y;
}

void Motor::setY(float p_y) {
    y = p_y;
}

//## package Workstation

//## class Motor
Motor::Motor() {
}

Motor::~Motor() {
}

void Motor::setPower(const speed& s, float distance) {
    //#[ operation setPower(speed,float)
    std::cout << "Set Speed: " << s;
    //#]
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/Motor.cpp
*********************************************************************/
