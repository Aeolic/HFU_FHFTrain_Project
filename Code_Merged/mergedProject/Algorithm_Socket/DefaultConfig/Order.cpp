/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: Order
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/Order.cpp
*********************************************************************/

//## auto_generated
#include "Order.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package Pi

//## class Order
Order::Order(int bSp, double tag, int aSp) {
    //#[ operation Order(int,double,int)
    beforeSpeed = bSp;
    this->tag = tag;
    afterSpeed = aSp;
    //#]
}

Order::Order() {
}

Order::~Order() {
}

int Order::getAfterSpeed() const {
    return afterSpeed;
}

void Order::setAfterSpeed(int p_afterSpeed) {
    afterSpeed = p_afterSpeed;
}

int Order::getBeforeSpeed() const {
    return beforeSpeed;
}

void Order::setBeforeSpeed(int p_beforeSpeed) {
    beforeSpeed = p_beforeSpeed;
}

double Order::getTag() const {
    return tag;
}

void Order::setTag(double p_tag) {
    tag = p_tag;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/Order.cpp
*********************************************************************/
