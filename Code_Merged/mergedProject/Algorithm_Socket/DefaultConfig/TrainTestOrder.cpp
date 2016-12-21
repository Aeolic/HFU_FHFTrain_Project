/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: TrainTestOrder
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestOrder.cpp
*********************************************************************/

//## auto_generated
#include "TrainTestOrder.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package TrainTest

//## class TrainTestOrder
TrainTestOrder::TrainTestOrder() {
}

TrainTestOrder::~TrainTestOrder() {
}

double TrainTestOrder::getTag() {
    //#[ operation getTag()
    newTag = false;
    return tag;
    //#]
}

void TrainTestOrder::newOrder(string order) {
    //#[ operation newOrder(string)
    string subOrder = order.substr(1, order.length() - 2);
    beforeSpeed = atoi(subOrder.substr(0, subOrder.find(",")).c_str());
    subOrder.erase(0, subOrder.find(",") + 1);
    tag = atof(subOrder.substr(0, subOrder.find(",")).c_str());
    subOrder.erase(0, subOrder.find(",") + 1);
    afterSpeed = atoi(subOrder.c_str());
    newTag = true;
    
    
    
    //#]
}

int TrainTestOrder::getAfterSpeed() const {
    return afterSpeed;
}

void TrainTestOrder::setAfterSpeed(int p_afterSpeed) {
    afterSpeed = p_afterSpeed;
}

int TrainTestOrder::getBeforeSpeed() const {
    return beforeSpeed;
}

void TrainTestOrder::setBeforeSpeed(int p_beforeSpeed) {
    beforeSpeed = p_beforeSpeed;
}

bool TrainTestOrder::getNewTag() const {
    return newTag;
}

void TrainTestOrder::setNewTag(bool p_newTag) {
    newTag = p_newTag;
}

void TrainTestOrder::setTag(double p_tag) {
    tag = p_tag;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/TrainTestOrder.cpp
*********************************************************************/
