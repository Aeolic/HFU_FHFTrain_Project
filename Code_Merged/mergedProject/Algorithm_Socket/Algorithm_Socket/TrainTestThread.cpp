/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainTestThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestThread.cpp
*********************************************************************/

//## auto_generated
#include "TrainTestThread.h"
//## link itsTrainTestCommunication
#include "TrainTestCommunication.h"
//## link itsTrainTestOrder
#include "TrainTestOrder.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## auto_generated
#include <stdlib.h>
//## auto_generated
#include <time.h>
//## package TrainTest

//## class TrainTestThread
TrainTestThread::TrainTestThread() {
    itsTrainTestCommunication = NULL;
    itsTrainTestOrder = NULL;
    //#[ operation TrainTestThread()
    cout << "Running TrainTest" << endl;
    itsTrainTestOrder = new TrainTestOrder();
    itsTrainTestCommunication = new TrainTestCommunication(itsTrainTestOrder);
    start();
    //#]
}

TrainTestThread::~TrainTestThread() {
    cleanUpRelations();
}

OMReactive* TrainTestThread::execute() {
    //#[ operation execute()
    // List of all allowed tags to find at start
    int allowedStartTags[4] = {0, 1, 2, 3};
    // Time, needed as seed
    time_t t;
    // Set time
    time(&t);
    // Init rand
    srand((unsigned int)t);
    
    cout << "TrainTest: driving forward" << endl;
    sleep(2);
    
    // Get random start tag
    int startTag = allowedStartTags[rand() % 4];
    cout << "TrainTest: stopped at tag " << startTag << endl;
        
    stringstream ss;
    ss << "[" << startTag << "]";
    itsTrainTestCommunication->sendPositionToPi( ss.str() );
    
    double testTag = 0.0;
    
    // Check for new order
    while (true)
    {
    	if (itsTrainTestOrder->getNewTag())
    	{   
    		// clear stringstream
    		ss.str(std::string());
    		cout << "TrainTest: driving forward" << endl; 
    		testTag = itsTrainTestOrder->getTag();
    		sleep(5);
    		
    		cout << "TrainTest: found tag " << testTag << endl;
    		ss << "[" << testTag << "]";
    		itsTrainTestCommunication->sendPositionToPi( ss.str() );
    	}	
    }
    
     
    //#]
}

TrainTestCommunication* TrainTestThread::getItsTrainTestCommunication() const {
    return itsTrainTestCommunication;
}

void TrainTestThread::setItsTrainTestCommunication(TrainTestCommunication* p_TrainTestCommunication) {
    itsTrainTestCommunication = p_TrainTestCommunication;
}

TrainTestOrder* TrainTestThread::getItsTrainTestOrder() const {
    return itsTrainTestOrder;
}

void TrainTestThread::setItsTrainTestOrder(TrainTestOrder* p_TrainTestOrder) {
    itsTrainTestOrder = p_TrainTestOrder;
}

void TrainTestThread::cleanUpRelations() {
    if(itsTrainTestCommunication != NULL)
        {
            itsTrainTestCommunication = NULL;
        }
    if(itsTrainTestOrder != NULL)
        {
            itsTrainTestOrder = NULL;
        }
}

/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestThread.cpp
*********************************************************************/
