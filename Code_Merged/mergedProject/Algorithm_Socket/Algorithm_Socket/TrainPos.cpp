/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainPos
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainPos.cpp
*********************************************************************/

//## auto_generated
#include "TrainPos.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package Pi

//## class TrainPos
int TrainPos::id(0);

TrainPos::TrainPos() : algCanRead(false), position(-3) {
    //#[ operation TrainPos()
    //position = -1;    
    //algCanRead = false;   
    ++id;
    pid = id;
    //#]
}

TrainPos::~TrainPos() {
}

void TrainPos::updatePosition(string position) {
    //#[ operation updatePosition(string)
    stringstream ss;
    double tag = -2; //station -2 does not exist. If -2 Received, smth went wrong.
    
    cout << " setting the new position in TrainPos" << endl; 
      
    ss << position.substr(1,position.length() - 2);
    ss >> tag;
    cout << tag;
    this->position = tag;
    algCanRead = true;
    
    //#]
}

bool TrainPos::getAlgCanRead() const {
    return algCanRead;
}

void TrainPos::setAlgCanRead(bool p_algCanRead) {
    algCanRead = p_algCanRead;
}

int TrainPos::getId() {
    return id;
}

void TrainPos::setId(int p_id) {
    id = p_id;
}

int TrainPos::getPid() const {
    return pid;
}

void TrainPos::setPid(int p_pid) {
    pid = p_pid;
}

double TrainPos::getPosition() const {
    return position;
}

void TrainPos::setPosition(double p_position) {
    position = p_position;
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainPos.cpp
*********************************************************************/
