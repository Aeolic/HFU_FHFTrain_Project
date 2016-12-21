/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainTestFailureThread
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestFailureThread.cpp
*********************************************************************/

//## auto_generated
#include "TrainTestFailureThread.h"
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

//## class TrainTestFailureThread
TrainTestFailureThread::TrainTestFailureThread() {
    itsTrainTestCommunication = NULL;
    itsTrainTestOrder = NULL;
    //#[ operation TrainTestFailureThread()
    cout << "Running TrainTest" << endl;
    itsTrainTestOrder = new TrainTestOrder();
    itsTrainTestCommunication = new TrainTestCommunication(itsTrainTestOrder);
    start();
    //#]
}

TrainTestFailureThread::~TrainTestFailureThread() {
    cleanUpRelations();
}

OMReactive* TrainTestFailureThread::execute() {
    //#[ operation execute()
    // List of all allowed tags to find at start
    int allowedStartTags[4] = {0, 1, 2, 3};
    // Time, needed as seed
    time_t t;
    // Set time
    time(&t);
    // Init rand
    srand((unsigned int)t);
    
    cout << "TrainTestFailure: driving forward" << endl;
    sleep(2);
    
    // Get random start tag
    int startTag = allowedStartTags[rand() % 4];
    cout << "TrainTestFailure: stopped at tag " << startTag << endl;
        
    stringstream ss;
    ss << "[" << startTag << "]";
    itsTrainTestCommunication->sendPositionToPi( ss.str() );
    
    double testTag = 0.0;
    double lastTag = startTag;
    // Count the amount of tags already read
    int amount = 0;
    
    // Check for new order
    while (true)
    {
    	if (itsTrainTestOrder->getNewTag())
    	{   
    		++amount;
    		// clear stringstream
    		ss.str(std::string());
    		cout << "TrainTestFailure: driving forward" << endl; 
    		testTag = itsTrainTestOrder->getTag();
    		
    		if (amount % 3 == 1)
    		{
    			testTag = lastTag;
    		} else if (amount % 3 == 2)
    		{
    			testTag += 0.5;
    			if (testTag >= 4)
    				testTag -= 4;
    		}
    		
    		sleep(5);
    		
    		cout << "TrainTestFailure: found tag " << testTag << endl;
    		ss << "[" << testTag << "]";
    		itsTrainTestCommunication->sendPositionToPi( ss.str() );
    		lastTag = testTag;
    	}	
    }
    
     
    //#]
}

TrainTestCommunication* TrainTestFailureThread::getItsTrainTestCommunication() const {
    return itsTrainTestCommunication;
}

void TrainTestFailureThread::setItsTrainTestCommunication(TrainTestCommunication* p_TrainTestCommunication) {
    itsTrainTestCommunication = p_TrainTestCommunication;
}

TrainTestOrder* TrainTestFailureThread::getItsTrainTestOrder() const {
    return itsTrainTestOrder;
}

void TrainTestFailureThread::setItsTrainTestOrder(TrainTestOrder* p_TrainTestOrder) {
    itsTrainTestOrder = p_TrainTestOrder;
}

void TrainTestFailureThread::cleanUpRelations() {
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
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestFailureThread.cpp
*********************************************************************/
