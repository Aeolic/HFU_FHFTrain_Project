/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Altera
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/Altera.cpp
*********************************************************************/

//## auto_generated
#include "Altera.h"
//## auto_generated
#include <sys/io.h>
//## auto_generated
#include <stdio.h>
//## auto_generated
#include <stdlib.h>
//## auto_generated
#include <unistd.h>
//## package Train

//## class Altera
unsigned short Altera::_MM(portBase + 0x04);

bool Altera::is_initialized(false);

unsigned short Altera::portBase(0x110);

Altera::Altera() {
}

Altera::~Altera() {
}

void Altera::init() {
    //#[ operation init()
    if (!is_initialized) {
    	if(!ioperm((unsigned long)portBase, (unsigned long)8, 1)) {
    		//TODO printf("Lowlevel: Hardware is initialized.\n");
    		is_initialized = true;
    	} else {
    		//TODO printf("ERROR Lowlevel: Failed to initialize hardware.\n");
    		exit(1);
    	}
    }
    //#]
}

void Altera::set_power(float pwr) {
    //#[ operation set_power(float)
    char ret_val = 0;
    unsigned char motor_byte = 0;
    init();
    
    if(pwr == 0)
    	set_lights(-1,-1,0);
    if(pwr > 0)
    	set_lights(1,-1,0);
    if(pwr < 0)
    	set_lights(-1,1,0); 
    
    if((pwr > -64) && (pwr < 64)) {
    	motor_byte = (unsigned char)(abs(pwr));
    	
    	motor_byte |= 0x80;        /* open emergency break */
    	motor_byte &= 0x3F;        /* speed auf dem Port ausmaskieren */
    	
    	if (pwr >= 0) {       /* drive forwards */
    		motor_byte |= 0x40;
    	} else {                      /* drive backwards */
    		motor_byte &= ~0x40;
    	}
    //TODO: Logger	printf("motor byte = %x\n", motor_byte);
    	outb(motor_byte,_MM);
    } else {
    	//TODO: Logger printf("ERROR altera.cpp: value for power out of range\n");
    }
    //#]
}

unsigned short Altera::get_MM() {
    return _MM;
}

bool Altera::getIs_initialized() {
    return is_initialized;
}

void Altera::setIs_initialized(bool p_is_initialized) {
    is_initialized = p_is_initialized;
}

unsigned short Altera::getPortBase() {
    return portBase;
}

void Altera::set_MM(unsigned short p__MM) {
    _MM = p__MM;
}

void Altera::setPortBase(unsigned short p_portBase) {
    portBase = p_portBase;
}

unsigned short Altera::_DIG_OUT_IN(portBase + 0x00);

unsigned short Altera::_DIG_OUT_OUT(portBase + 0x00);

void Altera::set_lights(char front_color, char rear_color, int waggon_attached) {
    //#[ operation set_lights(char,char,int)
        static const int RED_FRONT   = 1<<6;
        static const int WHITE_FRONT = 1<<5;
        static const int RED_REAR    = 1<<3;
        static const int WHITE_REAR  = 1<<7;
    
       int digout_value;
    
       init();
       // read old value from the digital out port
       digout_value = inb(_DIG_OUT_IN);
    //printf("LEDS: old value = %x", digout_value);
    
       // clear all bits of leds
       digout_value &= ~(RED_FRONT | WHITE_FRONT | RED_REAR | WHITE_REAR);
    //for (int i=0; i<8; i++) {
    //printf("bit #%d ist on \n", i);
    //   outb(1<<i, _DIG_OUT_OUT);
    //sleep(5);
    //}
       switch(front_color) {
          case -1 :
             digout_value |= RED_FRONT;
             break;
          case 0:  // nothing to do -- all leds are presetted to be off in this method
             break;
          case 1 :
             digout_value |= WHITE_FRONT;
             break;
          default :
                //printf("ERROR: altera_access_set_lights: value out of range (front).\n");
             break;
       }
    
       switch(rear_color) {
          case -1 :
             digout_value |= RED_REAR;
             break;
          case 0:  // nothing to do -- all leds are presetted to be off in this method
             break;
          case 1 :
             digout_value |= WHITE_REAR;
             break;
          default :
                //printf("ERROR: altera_access_set_lights: value out of range (rear).\n");
             break;
       }
    
       if (waggon_attached) {
                //printf("ERROR: altera_access_set_lights: waggons not treated yet .\n");
       }
    //printf(" --> new value = %x\n", digout_value);
       outb(digout_value, _DIG_OUT_OUT);
    //#]
}

unsigned short Altera::get_DIG_OUT_IN() {
    return _DIG_OUT_IN;
}

void Altera::set_DIG_OUT_IN(unsigned short p__DIG_OUT_IN) {
    _DIG_OUT_IN = p__DIG_OUT_IN;
}

unsigned short Altera::get_DIG_OUT_OUT() {
    return _DIG_OUT_OUT;
}

void Altera::set_DIG_OUT_OUT(unsigned short p__DIG_OUT_OUT) {
    _DIG_OUT_OUT = p__DIG_OUT_OUT;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/Altera.cpp
*********************************************************************/
