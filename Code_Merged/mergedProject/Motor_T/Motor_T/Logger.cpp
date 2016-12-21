/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Motor_T 
	Configuration 	: Motor_T
	Model Element	: Logger
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Motor_T/Motor_T/Logger.cpp
*********************************************************************/

//## auto_generated
#include <iostream>
//## auto_generated
#include "Logger.h"
//## package Common

//## class Logger
void Logger::error(std::string message) {
    //#[ operation error(std::string)
    std::cout << "ERROR : " << message << std::endl;
    //#]
}

Logger::Logger() {
}

Logger::~Logger() {
}

void Logger::debug(std::string msg) {
    //#[ operation debug(std::string)
    std::cout << "DBG : " << msg << std::endl;
    //#]
}

/*********************************************************************
	File Path	: Motor_T/Motor_T/Logger.cpp
*********************************************************************/
