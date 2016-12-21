/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: startUpClass
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/startUpClass.cpp
*********************************************************************/

//## auto_generated
#include "startUpClass.h"
//## link itsPiAlgorithm
#include "PiAlgorithm.h"
//## link itsTrainListenerThread
#include "TrainListenerThread.h"
//## link itsTrainThread
#include "TrainThread.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## package Socket

//## class startUpClass
startUpClass::startUpClass() {
    itsPiAlgorithm = NULL;
    itsTrainListenerThread = NULL;
    itsTrainThread = NULL;
    //#[ operation startUpClass()
                              itsPiAlgorithm = new PiAlgorithm();
                              itsTrainThread = new TrainThread();
    //#]
}

startUpClass::~startUpClass() {
    cleanUpRelations();
}

PiAlgorithm* startUpClass::getItsPiAlgorithm() const {
    return itsPiAlgorithm;
}

void startUpClass::setItsPiAlgorithm(PiAlgorithm* p_PiAlgorithm) {
    itsPiAlgorithm = p_PiAlgorithm;
}

TrainListenerThread* startUpClass::getItsTrainListenerThread() const {
    return itsTrainListenerThread;
}

void startUpClass::setItsTrainListenerThread(TrainListenerThread* p_TrainListenerThread) {
    itsTrainListenerThread = p_TrainListenerThread;
}

TrainThread* startUpClass::getItsTrainThread() const {
    return itsTrainThread;
}

void startUpClass::setItsTrainThread(TrainThread* p_TrainThread) {
    itsTrainThread = p_TrainThread;
}

void startUpClass::cleanUpRelations() {
    if(itsPiAlgorithm != NULL)
        {
            itsPiAlgorithm = NULL;
        }
    if(itsTrainListenerThread != NULL)
        {
            itsTrainListenerThread = NULL;
        }
    if(itsTrainThread != NULL)
        {
            itsTrainThread = NULL;
        }
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/startUpClass.cpp
*********************************************************************/
