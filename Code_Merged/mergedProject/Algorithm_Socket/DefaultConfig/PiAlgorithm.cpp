/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: PiAlgorithm
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/PiAlgorithm.cpp
*********************************************************************/

//## auto_generated
#include "PiAlgorithm.h"
//## auto_generated
#include <iostream>
//## auto_generated
#include <string>
//## auto_generated
#include <sstream>
//## auto_generated
#include <vector>
//## link itsCommunication
#include "Communication.h"
//## link itsTrainPos
#include "TrainPos.h"
//## package Pi

//## class PiAlgorithm
PiAlgorithm::PiAlgorithm() : orderListUpToDate(false), currentStation(-1), dim(4), lastOrderTag(-5) {
    itsCommunication = NULL;
    itsTrainPos = NULL;
    //#[ operation PiAlgorithm()
    cout << "PI ERSTELLT." << endl;    
    itsTrainPos = new TrainPos();  
    //trip[dim][dim];
    //train position must be given to PiListener, so that they work with the same object
    itsCommunication = new Communication(itsTrainPos);  
    
    cout << "PiAlgorithm Constructor" << endl;   
    start();       
                                                      
    //#]
}

PiAlgorithm::~PiAlgorithm() {
    cleanUpRelations();
}

void PiAlgorithm::executeSocket() {
    //#[ operation executeSocket()
    int i = 1;
    while(true)
    {
    	cout << "PI: Ich berechne etwas." << endl;
        stringstream ss;
        ss << i++;
        itsCommunication->sendOrder("Fahre an Bahnhof " + ss.str());
        sleep(5);
    }
    //#]
}

void PiAlgorithm::cleanUpRelations() {
    if(itsCommunication != NULL)
        {
            itsCommunication = NULL;
        }
    if(itsTrainPos != NULL)
        {
            itsTrainPos = NULL;
        }
}

bool PiAlgorithm::canReadTrainPosition() {
    //#[ operation canReadTrainPosition()
    return itsTrainPos->getAlgCanRead();
    //#]
}

bool PiAlgorithm::canSendOrder() {
    //#[ operation canSendOrder()
    //checks whether Algorithm can send next order to Train
    //it means the position of the train (currentPos) is the one that is expected by Pi (lastOrderTag), so the one sent by Pi.
    //So we compare the last order we sent to Train with its current position we receive from it  
    cout << " In canSendOrder()  lastOrderTag == " << lastOrderTag << " currentPos == " << currentPos << endl;
    return (lastOrderTag == currentPos);
    //#]
}

void PiAlgorithm::createOrderlist() {
    //#[ operation createOrderlist()
    //currentPos in this context is the START STATION of the train	      
    
    // currentPos is alredy set in the execute method.
    //currentPos = 0; //TEST ONLY. currentPos is supposed to be set by PiListenerThread
    int startStation = currentPos;  //double -> integer. Make sure the train is standing on a real station, not a "middle" one
    
    bool passengersFound = false;
    for (int i = 0; i < dim; ++i)
    {
      for (int j = 0; j < dim; ++j)
      	if (trip[i][j] != 0){                                        
      		passengersFound = true; 
      		break;
      	}  
      if(passengersFound)
      	break;
    }         
      //if passengersFound stays false, it means no passengers at all at any station
      //in this case eventually some kind of output so that it is clear why the train does not move  
    if (!passengersFound) 
    	throw "No passengers";   //let the user know why the train is not moving     
    	
    //else move the train. startStation could be [0...dim-1]
    
    bool stop[2*dim-2]; // value of stop[0] set on 'true' shows the necessity to stop the train at (startStation + 1 + i) % dim
    //example: stop[] = {1,0,1,0,0,1} and startStation is 1. This means: Stop at station 2, no stop at 3, stop at 0, no stop at 1-2, stop at 3.
    //2*dim-2 comes from: dim = 4 => 6*2 Orders, dim = 6 => 10*2 Orders. 
    //Conclusion: the train's longest trip will be : 2 stations before completing 2 full circles.
    //Initialization of stop[]. At the beginning, the train is not stopping anywhere (no orders yet created)
    for (int i=0; i<(2*dim-2); ++i)
    	stop[i] = false;
    	
    //check the matrix 'trip' in order to create orders. 
    //First, initialize 'stop[]' with new values. The orders can be created out of this array.
     
    //Idea: Part-1) if there is a value != 0 in a line (except the startStation line!), train should stop at Station(line) to let passengers IN
    //Part-2) if there is a value != 0 above the "diagonal", train should likewise stop at Station(column) to let passengers OUT   
    
    //Part1) : looking for at least one value != 0 in each line except the currentPos-line
    int line = -1;  //real line in the matrix  
    for (int i=1; i < dim; ++i){  //i=1, because the currentPos-line is ignored in Part-1)
      line = (startStation + i) % dim; 
      for (int j=0; j < dim; ++j)
        if (trip[line][j] != 0){ //means there is someone going FROM this station   
        	stop[i-1] = true;  //the 1st station after the startStation corresponds the position [0] in 'stop'-array
        	cout << "stop[" << i-1 << "] wurde auf true gesetzt (i-1)" << endl;  
        	break;
        }
    } //Part1) ready ---------------------------------       
         
    //Part2) : values in matrix above the diagonal   
    int column = -1;
    int counter = dim;
    int index = -1; 
    for (int i=0; i < dim; ++i){  
      line = (startStation + i) % dim; 
      for (int j=0; j < counter; ++j){
      	  column = (line + j) % dim;  //diagonal and above
          if(trip[line][column] != 0){ //means there is someone going TO the station column        
         	 index = (dim + column - startStation - 1) % dim; //worked for TEST1 and TEST3
        	 stop[index] = true; //Part-2)             
        	 cout << "stop[" << index << "] wurde auf true gesetzt (column). Line: " << line << endl;
          }
     
      }	
      --counter;  
    } //Part2) ready ---------------------------------  
    
    //Part3) : values in matrix under the diagonal    
    //Idea: stop[dim-1] corresponds the currentPos after a full circle
    counter = 1;
    for (int i=0; i < dim; ++i){  
      line = (startStation + i) % dim; 
      for (int j=0; j < counter; ++j){
      	  column = (dim + line - j) % dim; //diagonal and under
          if(trip[line][column] != 0){ //means there is someone going TO the station column, AFTER completing a full circle        
         	 index = ( (dim + column - startStation) % dim) + dim - 1; //TO CHANGE
        	 stop[index] = true; //Part-3) //TO CHANGE             
        	 cout << "stop[" << index << "] wurde auf true gesetzt (column). Line: " << line << endl;
          }
     
      }	
      ++counter;  
    } //Part3) ready ---------------------------------  
                    
    int finalStation = -1; //station -1 does not exist 
    for (int i=0; i<2*dim-2; ++i) 
    	if (stop[i])
    		//finalStation = (startStation + i + 1) % dim; //explain, why
    		finalStation = i; //explain, why
    
    //move the train from startStation to "finalStation" (middle station, final for Parts 1-2))			
    
    for (int i=0; i<=finalStation; ++i){ //create 2 orders
    	int tag = (startStation + i) % dim;
    	double tag1 = tag + 0.5;
    	double tag2 = tag + 1; //here tag2 can get too big (tag == dim does not exist)
    	if ((tag2 + 0.3) > dim)
    		tag2 = 0;
    	orderList.push_back(Order(1,tag1,1));  //LATER: making train go slower at middle tags before stopping at real stations
    	if (stop[i])
    		orderList.push_back(Order(1,tag2,0));  //train stops at the station
    	else                                   
    		orderList.push_back(Order(1,tag2,1)); //train keeps on moving through the station  
    }
    	
    
    //TEST output of stop[] array
    cout << "stop[]:" << endl;
    for (int i=0; i<2*dim-2; ++i)
    	cout << "\t" << stop[i];
    cout << endl;
    
    
    //--------------------TEST-----------------       
    cout << "\t\t\t\t\t currentPos: " << currentPos << endl;
    //Matrix:
    cout << "\t\t\t\t\tMatrix:" << endl;
    for (int i=0; i<dim; ++i){
      cout << "\t\t\t\t\t";
      for (int j=0; j<dim; ++j)
      	cout << trip[i][j] << "-";                
      cout << endl;           
    }
    cout << endl;    
    //TEST output from orderList
    //for (Order x: orderList)   //for-each loop does not work in C++98
    for (list<Order>::iterator it = orderList.begin(); it != orderList.end(); ++it)      
      cout << "\t\t\t\t\t(in createOrderlist())--> Order (Tag): " << (*it).getTag() << endl;        
      
    //now add the orders between the startStation and the initial station of the train (currentPos).
      
                  
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
    //#]
}

OMReactive* PiAlgorithm::execute() {
    //#[ operation execute()
    //execute() - like run()-method in Java. Thread will perform this method after it has been started.
    
    // __________________________________________
    // TEST for the Socket connection
    // __________________________________________
    // executeSocket();
    
    //will be executed after start() of the thread. 
    //Thread starts itself in its constructor      
    cout << "test output for execute()" << endl;
    //int dim = 4;    
        //4 is the dimension of our matrix. must be replaced   
        
    //Initializing our matrix. Row = from-Station, Column = to-Station
    for (int i = 0; i<dim; ++i)
      for (int j = 0; j<dim; ++j)
      	trip[i][j] = 0;  
    
    //TEST-values in the matrix
    trip[0][2] = 7;
    trip[1][3] = 7;
    trip[2][1] = 7;
    //---------------------  	  
    
    // Save the converted order in this string
    string orderString;  
    
    
    /*
     //TEST-------------------------
    createOrderlist();   
    cout << "from orderlist: " << orderlist[2].getTag() << endl;
    
    Order oTest(1,0.5,1);	
    
    orderlist.remove(oTest);                  
    		                               
    //TEST-------------------------   
    */
    
    // It's the first run so we don't have to check if the orderList ist wrong, because
    // we have just made it.  
    bool firstRun = true;  
                            
    // shows how many people in the Train are and where they want to lef the train                        
    //int passengerInTrain[dim]; 
    
    int pos = 0;
     
    while(true)
    {                     
    	static int counter=0;   // to see how often pi generates orderlist
    	++counter;
    	cout << "PI: Ich berechne etwas das " << counter << ". Mal" << endl;  
    		
        
        while (!canReadTrainPosition())
        //Polling, we know it is bad, we will replace it with a smart semaphore or smth else
        	;
                       
        cout << "reading the position from aldCanRead" << endl;               
        currentPos = itsTrainPos->getPosition(); // now we know the position of the train
        itsTrainPos->setAlgCanRead(false);
                                            
                                            
    
    	if (!orderListUpToDate){  
    	//we create the orderlist from every new matrix only once
    	//for the future, when matrix will be updated by the user
    		createOrderlist();   	
    		orderListUpToDate = true;
    	}    
    	
    	// We have to load the people int the train and delete them in the matrix 
    	
    	pos = currentPos;
    	if(firstRun)
    	{ 
    	  for( int i = 0; i < dim; ++i)
    	  {
    	    if(trip[pos][i] != 0)
    	    {
    	      passengerInTrain[i] = trip[pos][i];
    	    }    
    	    trip[pos][i] = 0;
    	  }
    	}  
    	else
    	{
    	  int tempTag;
    	  if(lastOrder.getAfterSpeed() == 0 && canSendOrder())
    	  {       
    	    tempTag = lastOrder.getTag(); 
    	    passengerInTrain[tempTag] = 0;
    	    
    	    for( int i = 0; i < dim; ++i)
    	    {
    	      if(trip[pos][i] != 0)
    	      {
    	        passengerInTrain[i] += trip[pos][i];
    	      }
    	      trip[pos][i] = 0; 
    	    }
    	  }
    	
    	}
    	
    	
    	if ((!canSendOrder()) && (firstRun != true))
    	{
    		//sendOrderToPiSpeaker ...
    		cout << " --- REPAIR ---" << endl;
    		repairOrderlist(); //if smth unexpected happened (RFID-Tag not read prorerly, etc.), adjusting the orderlist
    	}
    		                    
    	//cout << "TEST: execute in PI. 0-te Tag from orderlist: " << orderlist[0].getTag() << endl;	
    	//cout << "TEST: execute in PI. size of orderlist: " << orderlist.getSize() << endl;	                    
    	//for (iterator it = orderlist.begin(); it != orderlist.end(); ++it)
    	//	cout << "TESTING orderlist: " << it->getTag() << endl;
    	
    	// Here we send the order to the Communication;	                    
    	sendOrderToCommunication();  
    	       
        //itsPiSpeakerThread->sendOrderToTrain("Fahre an Bahnhof " + ss.str());
        firstRun = false;   
    	sleep(1);
    }
    //#]
}

void PiAlgorithm::sendOrderToCommunication() {
    //#[ operation sendOrderToCommunication()
    Order tempOrder = orderList.front();
    stringstream order;
    
    order << "[";
    order << tempOrder.getBeforeSpeed();
    order << ",";
    order << tempOrder.getTag();
    order << ",";
    order << tempOrder.getAfterSpeed();
    order << "]";
    
    lastOrder = tempOrder;
                    
    // Deleted the first Order in our orderList so we can send the first Order
    // from our orderList the next time again.
    orderList.pop_front(); 
    
    cout << "I am in sendOrder " << endl;
    
    itsCommunication->sendOrder(order.str());
    
    // Save the Tag we will send to the Train so we can check the position 
    // the Train will send when he arrives at the next Tag.
    lastOrderTag = lastOrder.getTag();
    //#]
}

double PiAlgorithm::getCurrentStation() const {
    return currentStation;
}

void PiAlgorithm::setCurrentStation(double p_currentStation) {
    currentStation = p_currentStation;
}

const int PiAlgorithm::getDim() const {
    return dim;
}

int PiAlgorithm::getTrip(int i2, int i1) const {
    return trip[i2][i1];
}

void PiAlgorithm::setTrip(int i2, int i1, int p_trip) {
    trip[i2][i1] = p_trip;
}

TrainPos* PiAlgorithm::getItsTrainPos() const {
    return itsTrainPos;
}

void PiAlgorithm::setItsTrainPos(TrainPos* p_TrainPos) {
    itsTrainPos = p_TrainPos;
}

void PiAlgorithm::repairOrderlist() {
    //#[ operation repairOrderlist()
    //compare the tags currentPos and lastOrderTag and do smth if not equal
    //e.g.: the missed stations should be taken care of (passengers brought home)  
                                                                             
    int pos = currentPos;                                                                         
                                                                             
    // Case 1: We at a Train station. So we just remake our orderList   
    if(currentPos == 0.0 | currentPos == 1.0 | currentPos == 2.0 | currentPos == 3.0)
    {
      while(!orderList.empty())
      {
        orderList.pop_front();
      }
      int pos = currentPos;
      for( int i = 0; i < dim; ++i)
      {
        trip[pos][i] += passengerInTrain[i];
      }	      
      createOrderlist(); 	
    }
    
    // Case 2: We are between a Train station. We delete our current orderList
    //         and create one order which lets uns drive to the next Train station
    else
    {
      while(!orderList.empty())
      {
        orderList.pop_front();
      }
      orderListUpToDate = false; 
      orderList.push_back(Order(1,(currentPos + 0.5),0));  
      
      pos = (currentPos + 0.5);    
      for( int i = 0; i < dim; ++i)
      {
        trip[pos][i] += passengerInTrain[i];
      }	  
      
    }
    //#]
}

double PiAlgorithm::getCurrentPos() const {
    return currentPos;
}

void PiAlgorithm::setCurrentPos(double p_currentPos) {
    currentPos = p_currentPos;
}

double PiAlgorithm::getLastOrderTag() const {
    return lastOrderTag;
}

void PiAlgorithm::setLastOrderTag(double p_lastOrderTag) {
    lastOrderTag = p_lastOrderTag;
}

bool PiAlgorithm::getOrderListUpToDate() const {
    return orderListUpToDate;
}

void PiAlgorithm::setOrderListUpToDate(bool p_orderListUpToDate) {
    orderListUpToDate = p_orderListUpToDate;
}

std::list<Order>::const_iterator PiAlgorithm::getOrderList() const {
    std::list<Order>::const_iterator iter;
    iter = orderList.begin();
    return iter;
}

void PiAlgorithm::setOrderList(Order p_orderList) {
    orderList.push_back(p_orderList);
}

Communication* PiAlgorithm::getItsCommunication() const {
    return itsCommunication;
}

void PiAlgorithm::setItsCommunication(Communication* p_Communication) {
    itsCommunication = p_Communication;
}

void PiAlgorithm::createOrderlist2() {
    //#[ operation createOrderlist2()
     //This function should be deleted after createOrderlist() is fully implemented
    
    Order o1(1,0,1);
    //orderList.push_back(o1);
    cout << "testing afterSpeed attribute: " << o1.getAfterSpeed() << endl; 
    
    Order o2(2,0.5,2);
    Order o3(3,1,3);
    //orderList.push_back(o2);
    //orderList.push_back(o3);
                                               
                                               
                                               
    // erst testen ob leerer Bahnhof
    	// weg zum nächsten erstelle
     
     
    // ist an einem vollen Bahnhof
    	//weiter mit der oderlist machen   
    	
    	
    int currentLine = currentPos; // Line in matrix trip, with which we are working      
    int startStation = currentPos;
    bool startFound = false;
    for (int i = 0; i < dim; ++i)
    {
      for (int j = 0; j < dim; ++j)
      	if (trip[currentLine][j] != 0){
      		startStation = currentLine;                                        
      		startFound = true;
      	}  
      if(startFound == true)
      	break;
      currentLine = (currentLine + 1) % dim;
    }         
    //startStation now has the value of the first station having passengers on it
      //if startFound stays false, it means no passengers at all at any station
      //in this case eventually some kind of output so that it is clear why the train does not move  
    if (startFound) //then move the train to its startStation - where the first passengers are waiting
    {                                               
      currentLine = currentPos;
      for (int i = 0; i < (startStation - currentLine + dim) % 4; ++i) //create 2*orders so often
      {
      	orderList.push_back(Order(1,((currentLine+i)%dim) + 0.5 ,1 ));
      	orderList.push_back(Order(1,((currentLine+i)%dim) + 1 ,1));	
      }	 
    } 
    //else let the user know why the train is not moving     
    
    //TEST output from orderList
    //for (Order x: orderList)   //for-each loop does not work in C++98
    for (list<Order>::iterator it = orderList.begin(); it != orderList.end(); ++it)      
      cout << "\t\t\t\t\t(in createOrderlist())--> Order (Tag): " << (*it).getTag() << endl;  
      
      
      
    	  
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
                                          
    //#]
}

Order* PiAlgorithm::getLastOrder() const {
    return (Order*) &lastOrder;
}

int PiAlgorithm::getPassengerInTrain(int i1) const {
    return passengerInTrain[i1];
}

void PiAlgorithm::setPassengerInTrain(int i1, int p_passengerInTrain) {
    passengerInTrain[i1] = p_passengerInTrain;
}

/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/PiAlgorithm.cpp
*********************************************************************/
