/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Console_T 
	Configuration 	: Console_T
	Model Element	: RfidReader
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Console_T/Console_T/RfidReader.cpp
*********************************************************************/

//## auto_generated
#include "RfidReader.h"
//## operation RegisterListener(IObserver)
#include "IObserver.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <unistd.h>
//## auto_generated
#include <termios.h>
//## auto_generated
#include <string.h>
//## auto_generated
#include <sys/stat.h>
//## auto_generated
#include <fcntl.h>
//## auto_generated
#include <stdio.h>
//## auto_generated
#include <stdlib.h>
//## package Common

//## class RfidReader
RfidReader::RfidReader() {
    //#[ operation RfidReader()
    printf("create rfidreader\n") ;       
    //#]
}

RfidReader::~RfidReader() {
}

void RfidReader::RegisterListener(IObserver* newListener) {
    //#[ operation RegisterListener(IObserver)
    
    printf("Starte RegisterListener\n");
    Listener = newListener;
    //#]
}

void RfidReader::notifyObservers(char* rfidCode) {
    //#[ operation notifyObservers(char*)
    printf("Starte notifyObservers\n");
    
    Listener->notify(rfidCode);
    //#]
}

int RfidReader::openPort(int* fd) {
    //#[ operation openPort(int*)
        struct termios tty;
    	struct termios tty_old;
    	memset (&tty, 0, sizeof tty);
    
    	*fd = open("/dev/ttyS1", O_RDWR | O_NOCTTY);
    	if( *fd == -1 ) {
    		perror("open");
    		exit(1);
    	}
    	/* Error Handling */
    	if ( tcgetattr ( *fd, &tty ) != 0 ) {
    		perror("tcgetattr");
    	}
    
    	/* Save old tty parameters */
    	tty_old = tty;
    
    	/* Set Baud Rate */
    	cfsetospeed (&tty, (speed_t)B9600);
    	cfsetispeed (&tty, (speed_t)B9600);
    
    	/* Setting other Port Stuff */
    	tty.c_cflag     &=  ~PARENB;            // Make 8n1
    	tty.c_cflag     &=  ~CSTOPB;
    	tty.c_cflag     &=  ~CSIZE;
    	tty.c_cflag     |=  CS8;
    
    	tty.c_cflag     &=  ~CRTSCTS;           // no flow control
    //	tty.c_cc[VTIME]  =  5;                  // 0.5 seconds read timeout
    	tty.c_cflag     |=  CREAD | CLOCAL;     // turn on READ & ignore ctrl lines
    
    	/* Make raw */
    	cfmakeraw(&tty);
    
    	/* Flush Port, then applies attributes */
    	tcflush( *fd, TCIFLUSH );
    	if ( tcsetattr ( *fd, TCSANOW, &tty ) != 0) {
    		perror("tcsetattr");
    	} 
    //#]
}

int RfidReader::readCard(int fd, char* buf) {
    //#[ operation readCard(int,char*)
    //printf("Starte readCard\n");
                           
        char input = 0;
    	int receive = 0;
    	int status;
    
    	while((status = read(fd, &input, 1)) != 0 ) {
    		if(receive >=  15) return -1;
    		if(status == -1) return -1;
    		if(input == 0x0d) break;  
    		if(input >= '0' && input <= 'Z')  {
    			buf[receive++] = input;
    		//	printf("Char 0x%x \n", input); 
    		}
    	} 
    	return 0;
    	
    
    //#]
}

IObserver* RfidReader::getListener() const {
    return Listener;
}

void RfidReader::setListener(IObserver* p_Listener) {
    Listener = p_Listener;
}

/*********************************************************************
	File Path	: Console_T/Console_T/RfidReader.cpp
*********************************************************************/
