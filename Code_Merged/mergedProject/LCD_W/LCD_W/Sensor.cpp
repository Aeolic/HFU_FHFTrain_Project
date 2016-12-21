/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: LCD_W 
	Configuration 	: LCD_W
	Model Element	: Sensor
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: LCD_W/LCD_W/Sensor.cpp
*********************************************************************/

//## auto_generated
#include "Sensor.h"
//## auto_generated
#include <iostream>
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

/*********************************************************************
	File Path	: LCD_W/LCD_W/Sensor.cpp
*********************************************************************/
