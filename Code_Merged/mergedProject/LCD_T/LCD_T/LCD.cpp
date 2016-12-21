/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: LCD_T 
	Configuration 	: LCD_T
	Model Element	: LCD
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: LCD_T/LCD_T/LCD.cpp
*********************************************************************/

//## auto_generated
#include <iostream>
//## auto_generated
#include <stdio.h>
//## auto_generated
#include <stdlib.h>
//## auto_generated
#include <unistd.h>
//## auto_generated
#include <fcntl.h>
//## auto_generated
#include <termio.h>
//## auto_generated
#include <string.h>
//## auto_generated
#include <errno.h>
//## auto_generated
#include "LCD.h"
//## link Log
#include "Logger.h"
//## package Train

//## class LCD

//#[ ignore
#define NETWORK_DEVICE "eth0"
#define Network_device_LAN "wlan0"
#define DEV_NAME "/dev/ttyS0"
#define DISPLAY_COLUMS 20
//#]


LCD::LCD() {
    Log = NULL;
    //#[ operation LCD()
    struct termios termio;
    
    termio.c_iflag = 0;
    termio.c_lflag = 0;
    termio.c_oflag = ONLCR;
    termio.c_cflag = CLOCAL | PARENB | CS8;  
    
    if (cfsetospeed(&termio, B9600) < 0) {
    	perror("lcd_interface: set ospeed");
    }
    
    
    fd = open(DEV_NAME,O_RDWR | O_NOCTTY | O_SYNC);
    if (!fd) {
    	Log->error("lcd: could not open device");
    	throw "Fail LCD: Open Device";
    }
    tcsetattr(fd, TCSANOW, &termio);
    
    clear();
    lcd_write((char*)"\033R",2);   // reset lcd module
    sleep(1);
    lcd_write((char*)"\033C0\033M5",6); // no cursor; overwrite mode; no scroll
    //#]
}

LCD::~LCD() {
    //#[ operation ~LCD()
       if (fd >= 0)
       {
          close(fd);
          fd = -1;
       }
    //#]
    cleanUpRelations();
}

Logger* LCD::getLog() const {
    return Log;
}

void LCD::cleanUpRelations() {
    if(Log != NULL)
        {
            Log = NULL;
        }
}

int LCD::getFd() const {
    return fd;
}

void LCD::setFd(int p_fd) {
    fd = p_fd;
}

void LCD::clear() {
    //#[ operation clear()
    lcd_write((char*)"\014",1);
    //#]
}

void LCD::write_to_position(int lin, int col, std::string text) {
    //#[ operation write_to_position(int,int,std::string)
    char location[4];
    
    if (lin < 1 || lin > 4 | col < 1 || col > 20 ){
    	//printf("lcd_write_to_pos: pos out of bounds\n");  
    	return;
    }     
    
    location[0] = 0x1b;  // ESC
    location[1] = 'O';
    location[2] = col;
    location[3] = lin;
    lcd_write(location, 4);
    lcd_write(text, text.length());
    //#]
}

void LCD::lcd_write(std::string text, int text_length) {
    //#[ operation lcd_write(std::string,int)
    write(fd, text.c_str(), (int)text_length);
    //#]
}

void LCD::setLog(Logger* p_Logger) {
    Log = p_Logger;
}

/*********************************************************************
	File Path	: LCD_T/LCD_T/LCD.cpp
*********************************************************************/
