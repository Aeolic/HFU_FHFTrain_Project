/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: Sensor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/Sensor.cpp
*********************************************************************/

//## auto_generated
#include "Sensor.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <sys/io.h>
//## auto_generated
#include <math.h>
//## auto_generated
#include <sys/socket.h>
//## auto_generated
#include <net/if.h>
//## auto_generated
#include <netinet/in.h>
//## auto_generated
#include <sys/ioctl.h>
//## package Workstation

//## class Sensor
Sensor::Sensor() : totalDistance(0), totalDistanceAbs(0), totalDistanceTicks(0) {
}

Sensor::~Sensor() {
}

float Sensor::getAmpereExtern() {
    //#[ operation getAmpereExtern()
    return 05.1235;
    //#]
}

float Sensor::getAmpereMotor() {
    //#[ operation getAmpereMotor()
    return 06.1233;
    //#]
}

float Sensor::getDistance() {
    //#[ operation getDistance()
    return totalDistance;
    //#]
}

float Sensor::getDistanceAbs() {
    //#[ operation getDistanceAbs()
    return totalDistanceAbs;
    //#]
}

int Sensor::getDistanceTicks() {
    //#[ operation getDistanceTicks()
    return totalDistanceTicks;
    //#]
}

void Sensor::getIP(char* ipBuff) {
    //#[ operation getIP(char*)
    ipBuff =  "123.456.789.123";
    //#]
}

int Sensor::getInput(int channel) {
    //#[ operation getInput(int)
    //#]
}

void Sensor::getRfid() {
    //#[ operation getRfid()
                      
    //#]
}

float Sensor::getTemperature() {
    //#[ operation getTemperature()
    return 24.2133;
    //#]
}

float Sensor::getVoltage(int channel) {
    //#[ operation getVoltage(int)
    return 3.1234;
    //#]
}

float Sensor::getVoltageAux() {
    //#[ operation getVoltageAux()
    return 5.123;
    //#]
}

float Sensor::getVoltageExtern() {
    //#[ operation getVoltageExtern()
    return 24.3246;
    //#]
}

float Sensor::getVoltageMotor() {
    //#[ operation getVoltageMotor()
    return 10.345;
    //#]
}

void Sensor::updateDistance() {
    //#[ operation updateDistance()
    totalDistanceTicks += 5.0f;
    totalDistance =   totalDistanceTicks * 1.2355f; 
    totalDistanceAbs =   totalDistanceTicks * 1.321f;
    //#]
}

float Sensor::getTotalDistance() const {
    return totalDistance;
}

void Sensor::setTotalDistance(float p_totalDistance) {
    totalDistance = p_totalDistance;
}

float Sensor::getTotalDistanceAbs() const {
    return totalDistanceAbs;
}

void Sensor::setTotalDistanceAbs(float p_totalDistanceAbs) {
    totalDistanceAbs = p_totalDistanceAbs;
}

int Sensor::getTotalDistanceTicks() const {
    return totalDistanceTicks;
}

void Sensor::setTotalDistanceTicks(int p_totalDistanceTicks) {
    totalDistanceTicks = p_totalDistanceTicks;
}

//## package Train

//## class Sensor
Sensor::Sensor() : lastDistance(0x0ffff), totalAbsoluteDistance(0), totalDistance(0) {
    //#[ operation Sensor()
    printf("Init Altera");
    lowlvlInit(0x110,8,1);
    //#]
}

Sensor::~Sensor() {
}

unsigned char Sensor::convertChannel(int channel) {
    //#[ operation convertChannel(int)
    unsigned char CSB[8]={0x88,0x99,0xAA,0xBB,0xCC,0xDD,0xEE,0xFF};
    unsigned char channel_hw_adress; 
    
    if (channel<sizeof(CSB))
    {
    	channel_hw_adress = CSB[channel];  
        
        #ifdef DEBUG
    		printf("analog_convert_channel; channel selected %x\n", channel_hw_adress);    
    	#endif
    
    }
    else
    {
      channel_hw_adress = 0;   
      
      #ifdef DEBUG                                                                   
      	printf("Error converting Channel"); 
      #endif
    }
    
    return(channel_hw_adress);
    //#]
}

float Sensor::getAmpereExtern() {
    //#[ operation getAmpereExtern()
    float imotor = 0;
    imotor = getVoltage(1) * 0.5;
    return(imotor);
    
    //#]
}

float Sensor::getAmpereMotor() {
    //#[ operation getAmpereMotor()
    float iextern = 0;
    iextern = getVoltage(3) * 0.106579;
    return(iextern);
    
    //#]
}

float Sensor::getDistance() {
    //#[ operation getDistance()
    return totalDistance;
    //#]
}

float Sensor::getDistanceAbs() {
    //#[ operation getDistanceAbs()
    return totalAbsoluteDistance;
    //#]
}

int Sensor::getDistanceTicks() {
    //#[ operation getDistanceTicks()
    return totalDistanceTicks;
    //#]
}

void Sensor::getIP(char* ipBuff) {
    //#[ operation getIP(char*)
    	char IPBuff[15];  
    	sprintf(ipBuff, "123.123.123.123");    
    	
    	#ifdef __CYGWIN__                          
    		     
    		return;
    	#else
    	
    	int sock;
    	struct ifconf interfaces;
    	char ip_buf[4096];
    	struct ifreq *ifr;      
    	unsigned long ip;
        
        //std::cout << "creating socket" << std::endl;
    	
    	//create socket
    	if( (sock = socket(AF_INET, SOCK_DGRAM, 0)) == -1 )
    		return;           
    		
        //std::cout << "socket created" << std::endl;   
        
    	//prepare ifinterfaces -> usable buffer size and buffer entry point
    	interfaces.ifc_len = sizeof(ip_buf);
    	interfaces.ifc_buf = (caddr_t) ip_buf;
    
    	//fill confing with interfaces
    	if (ioctl(sock,SIOCGIFCONF,&interfaces) < 0) 
    		return;
    
    	//get first entry
    	ifr = (struct ifreq*)ip_buf;
    	while ((char*)ifr < ip_buf+interfaces.ifc_len) {
    
    		//wait for the right interface
    		if(!strcmp(ifr->ifr_name, "wlan0")) {
    			ip = (&((struct sockaddr_in*)&ifr->ifr_addr)->sin_addr)->s_addr;
    			break;
    		}
    
    		//get next entry
    		ifr = (struct ifreq*)((char*)ifr +sizeof(*ifr));
    	}
           
        int first = (ip&0xFF);
    	int second = (ip&0xFF00)>>8;
    	int third = (ip&0xFF0000)>>16;
    	int fourth = (ip&0xFF000000)>>24;
    	               
    	sprintf(ipBuff, "%d.%d.%d.%d", first, second, third, fourth);              
    	                                             
    	//std::cout << IPBuff << std::endl;
    	close(sock);  
    	
    	#endif    
    	
    	return;
    //#]
}

int Sensor::getInput(int channel) {
    //#[ operation getInput(int)
    /*
    This function reads two byte from the hardware a lower und an upper one.
    The hardware only supports 12 bit so we have to throw away all higher bits.
    Also we need to set the zero point right.
    */
    
    unsigned char channel_hw_adress; 
    unsigned char tmp = 0;   
    const unsigned char BM1[8]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80};
    int wait_counter = 2000;    /* max. wartezeit ca. 2 millisec */
    RAWDATA mydata;
                 
    channel_hw_adress = convertChannel(channel);
    
    
    #ifdef DEBUG
    	printf("getInput: Channel 0x%x \n", channel_hw_adress);
    #endif
    
    
    /* SEMAPHORE P MUTEX */
    /*
    sema_access_semaphore_p(SEMA_ANALOG_READ);
    */
    /* setting rights on io channel */ 
    if (lowlvlInit(_BASE, _BYTES, 1)) 
    {                  
    	#ifdef DEBUG          
    	printf("INIT ok.\n"); 
    	#endif 
    	
    	//Initialize Channel
    	outb(channel_hw_adress, _ADCCS); 
    	
    	usleep(10000);
    	
    	 
    	#ifdef DEBUG
    		printf("analog_get_input: Temporaer 0x%x\n",tmp); 
    	#endif  
    	
    	while( (!tmp) && (wait_counter) )
    	{
    		tmp = inb(_BUSY) & BM1[0]; 
    		usleep(1000);	
    		wait_counter-- ;
    	}
    	
    	if (tmp) 
    	{
    		 
    		#ifdef DEBUG
    			printf("analog_is_ready: 0x%x \n",tmp);
    		#endif
    		                              
    		//  lowlevel_read(_ADCLB, &mydata.bytewise.rawlowbyte);
    		//  lowlevel_read(_ADCHB, &mydata.bytewise.rawhighbyte); 
    		unsigned char lowByte = inb(_ADCLB);                       
    		unsigned char highByte = inb(_ADCHB);   
    		
    		
    		
    		#ifdef DEBUG
    			printf("read high: 0x%x, low: 0x%x \n",highByte, lowByte);
    		#endif
    		
    		mydata.bytewise.rawlowbyte = lowByte;
    		mydata.bytewise.rawhighbyte = highByte;
    		
    		
    		
    		#ifdef DEBUG
    			printf("analog_is_ready: data  high: 0x%x, low: 0x%x \n",mydata.bytewise.rawhighbyte,mydata.bytewise.rawlowbyte);
    		#endif
    		
    		/* throw away undefined bits 13-16  */
    		mydata.bytewise.rawhighbyte &= 0x0f; 
    		
    		#ifdef DEBUG
    			printf("Data without first bits 16-13 High: 0x%x Low: 0x%x \n",mydata.bytewise.rawhighbyte, mydata.bytewise.rawlowbyte);
    		#endif
    		
    		mydata.wordwise -= (unsigned short)_ZPO;  /* zero value equivalation */
    		   
    		
    		#ifdef DEBUG         
    			printf("analog_is_ready: data after zero value eq. high: 0x%x, low: 0x%x, word: 0x%x \n",mydata.bytewise.rawhighbyte, mydata.bytewise.rawlowbyte, mydata.wordwise);
    		#endif
    	
    	}
    	else
    	{              
    		#ifdef DEBUG
    			printf("ERROR Hardware not ready (could not read from hardware).\n");  
    		#endif
    	
    	}
    	/* SEMAPHORE V MUTEX */
    	/*
    	sema_access_semaphore_v(SEMA_ANALOG_READ);
    	*/
    }
    else
    {              
    	#ifdef DEBUG
    		printf("ERROR analog_get_input:  could not initialize hardware.\n"); 
    	#endif
    };
    
    return(mydata.wordwise);
    //#]
}

float Sensor::getTemperature() {
    //#[ operation getTemperature()
    float volts = 0;
    float temp  = 0;
    
    volts = getVoltage(5);
    if (volts < 2.25)
    {
      temp = 53.1 - (log10(volts) * 63.9);
    }
    else
    {
      temp = 29.0 - (log10(volts) - 0.367) / 0.283;
    }
    
    return(temp);
    
    //#]
}

float Sensor::getVoltage(int channel) {
    //#[ operation getVoltage(int)
    float volts = 0;
    volts = ((float)getInput(channel)) * 5 / 2048;
    return (volts);
    //#]
}

float Sensor::getVoltageAux() {
    //#[ operation getVoltageAux()
    float volts;
    volts = getVoltage(4) * 1.22;
    return(volts);
    //#]
}

float Sensor::getVoltageExtern() {
    //#[ operation getVoltageExtern()
    float volts = 0;
    volts = getVoltage(0) * 5.725; 
    return(volts);
    //#]
}

float Sensor::getVoltageMotor() {
    //#[ operation getVoltageMotor()
    float volts = 0;
    volts = getVoltage(2) * 5.751;
    return(volts);
    //#]
}

char Sensor::lowlvlInit(int addr, int num, int state) {
    //#[ operation lowlvlInit(int,int,int)
    char ret_value=0;
             
    #ifdef DEBUG
    	printf("Lowlevel: setting permission on hardware.\n"); 
    #endif
    
    
    if(!ioperm((unsigned long)addr, (unsigned long)num, state))
    {    
    	#ifdef DEBUG
    		printf("Lowlevel: Hardware is initialized.\n"); 
        #endif
    	
    	ret_value = 1;
    }
    else
    {         
    	#ifdef DEBUG
    		printf("ERROR Lowlevel: Failed to initialize hardware.\n");
        #endif
    }
    
    return (ret_value);
    //#]
}

void Sensor::updateDistance() {
    //#[ operation updateDistance()
    unsigned char sensorValue;
    int result;
                     
    //read current num of Ticks
    sensorValue = inb(_POS);                    
    
    //Initialze, because this is first read
    if (lastDistance == 0x0ffff) {
       lastDistance = sensorValue;
    }
            
      
    if(abs(lastDistance - sensorValue) < 60) {// Kein Ueberlauf
      // Vorwaerts / Rueckwaerts egal
      result = lastDistance - sensorValue;
    }
    else
    {// Ueberlauf
    	if(lastDistance > sensorValue)
    	{// Zaehler zaehlt vorwaerts / Rueckwaertsfahrt
    		result = lastDistance - sensorValue - 256;
    	}
    	else
    	{// Zaehler zaehlt rueckwaerts / Vorwaertsfahrt
    		result = lastDistance - sensorValue + 256;
    	}
    }  
          
    lastDistance = sensorValue;  
    totalDistanceTicks += result;
    totalAbsoluteDistanceTicks += abs(result);
    
    //TODO: Convert ticks to Distance-unit
    totalDistance += ((float)(result)) * CM_PER_TICKS;         
    totalAbsoluteDistance += ((float)abs(result)) * CM_PER_TICKS;  
              
    //printf("sensorValue: %d \n", sensorValue);               
    //printf("totalDistanceTicks: %d \n", totalDistanceTicks); 
    //printf("totalDistance: %1.4f \n", getDistance());  
    //printf("totalAbsoluteDistance: %1.4f \n", totalAbsoluteDistance);  
         
    //#]
}

float Sensor::getTotalAbsoluteDistance() const {
    return totalAbsoluteDistance;
}

void Sensor::setTotalAbsoluteDistance(float p_totalAbsoluteDistance) {
    totalAbsoluteDistance = p_totalAbsoluteDistance;
}

int Sensor::getTotalAbsoluteDistanceTicks() const {
    return totalAbsoluteDistanceTicks;
}

void Sensor::setTotalAbsoluteDistanceTicks(int p_totalAbsoluteDistanceTicks) {
    totalAbsoluteDistanceTicks = p_totalAbsoluteDistanceTicks;
}

float Sensor::getTotalDistance() const {
    return totalDistance;
}

void Sensor::setTotalDistance(float p_totalDistance) {
    totalDistance = p_totalDistance;
}

int Sensor::getTotalDistanceTicks() const {
    return totalDistanceTicks;
}

void Sensor::setTotalDistanceTicks(int p_totalDistanceTicks) {
    totalDistanceTicks = p_totalDistanceTicks;
}

int Sensor::getLastDistance() const {
    return lastDistance;
}

void Sensor::setLastDistance(int p_lastDistance) {
    lastDistance = p_lastDistance;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/Sensor.cpp
*********************************************************************/
