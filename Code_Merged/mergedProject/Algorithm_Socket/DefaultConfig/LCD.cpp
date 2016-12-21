/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: LCD
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/LCD.cpp
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

//## package Workstation

//## class LCD
LCD::LCD() {
    //#[ operation LCD()
    Line1 = "                    ";  
    Line2 = "                    ";    
    Line3 = "                    ";    
    Line4 = "                    ";  
    //#]
}

LCD::~LCD() {
}

void LCD::clear() {
    //#[ operation clear()
    Line1 = "                    ";  
    Line2 = "                    ";    
    Line3 = "                    ";    
    Line4 = "                    ";  
    //#]
}

void LCD::write_to_position(int x, int y, std::string data) {
    //#[ operation write_to_position(int,int,std::string)
    int c=0;
    	
    if(x==1)
    {            
    	Line1.replace(y-1, data.length(), data );
    } else if(x==2) {
    	Line2.replace(y-1, data.length(), data );
    } else if(x==3) {   
    	Line3.replace(y-1, data.length(), data );
    } else if(x==4) {
    	Line4.replace(y-1, data.length(), data );
    }
                                  
    //std::cout << "Z:" << x << " S:" << y << " DATA: " << data << std::endl;
    
             
    std::cout << std::endl << std::endl << std::endl << std::endl << "  |--------------------|"  << std::endl;
    std::cout << "  |" << Line1 << "|" << std::endl;
    std::cout << "  |" << Line2 << "|" << std::endl;  
    std::cout << "  |" << Line3 << "|" << std::endl;
    std::cout << "  |" << Line4 << "|" << std::endl;  
    std::cout << "  |--------------------|"  << std::endl;
    //#]
}

void LCD::lcd_write(std::string data, int line) {
    //#[ operation lcd_write(std::string,int)
    //#]
}

std::string LCD::getLine1() const {
    return Line1;
}

void LCD::setLine1(std::string p_Line1) {
    Line1 = p_Line1;
}

std::string LCD::getLine2() const {
    return Line2;
}

void LCD::setLine2(std::string p_Line2) {
    Line2 = p_Line2;
}

std::string LCD::getLine3() const {
    return Line3;
}

void LCD::setLine3(std::string p_Line3) {
    Line3 = p_Line3;
}

std::string LCD::getLine4() const {
    return Line4;
}

void LCD::setLine4(std::string p_Line4) {
    Line4 = p_Line4;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/LCD.cpp
*********************************************************************/
