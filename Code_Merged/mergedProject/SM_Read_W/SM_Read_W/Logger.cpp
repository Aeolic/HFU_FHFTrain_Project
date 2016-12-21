/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_W 
	Configuration 	: SM_Read_W
	Model Element	: Logger
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_W/SM_Read_W/Logger.cpp
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
	File Path	: SM_Read_W/SM_Read_W/Logger.cpp
*********************************************************************/
