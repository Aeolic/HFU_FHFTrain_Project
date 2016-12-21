/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: PiAlgorithm
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/PiAlgorithm.h
*********************************************************************/

#ifndef PiAlgorithm_H
#define PiAlgorithm_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <oxf/omthread.h>
//## dependency sstream
#include <sstream>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## auto_generated
#include <list>
//## auto_generated
#include <iterator>
//## attribute lastOrder
#include "Order.h"
//## link itsCommunication
class Communication;

//## link itsTrainPos
class TrainPos;

//## package Pi

//## class PiAlgorithm

using namespace std;

class PiAlgorithm : public OMThread {
    ////    Constructors and destructors    ////
    
public :

    //## operation PiAlgorithm()
    PiAlgorithm();
    
    //## auto_generated
    ~PiAlgorithm();
    
    ////    Operations    ////
    
    //## operation executeSocket()
    void executeSocket();
    
    ////    Additional operations    ////

protected :

    //## auto_generated
    void cleanUpRelations();
    
    ////    Relations and components    ////

public :

    //## operation canReadTrainPosition()
    bool canReadTrainPosition();
    
    //## operation canSendOrder()
    bool canSendOrder();
    
    //## operation createOrderlist()
    void createOrderlist();
    
    //## operation execute()
    OMReactive* execute();
    
    //## operation sendOrderToCommunication()
    void sendOrderToCommunication();
    
    //## auto_generated
    double getCurrentStation() const;
    
    //## auto_generated
    void setCurrentStation(double p_currentStation);
    
    //## auto_generated
    const int getDim() const;
    
    //## auto_generated
    int getTrip(int i2, int i1) const;
    
    //## auto_generated
    void setTrip(int i2, int i1, int p_trip);
    
    //## auto_generated
    TrainPos* getItsTrainPos() const;
    
    //## auto_generated
    void setItsTrainPos(TrainPos* p_TrainPos);

protected :

    bool orderListUpToDate;		//## attribute orderListUpToDate
    
    double currentStation;		//## attribute currentStation
    
    const int dim;		//## attribute dim
    
    int trip[4][4];		//## attribute trip
    
    TrainPos* itsTrainPos;		//## link itsTrainPos

public :

    //## operation repairOrderlist()
    void repairOrderlist();
    
    //## auto_generated
    double getCurrentPos() const;
    
    //## auto_generated
    void setCurrentPos(double p_currentPos);
    
    //## auto_generated
    double getLastOrderTag() const;
    
    //## auto_generated
    void setLastOrderTag(double p_lastOrderTag);
    
    //## auto_generated
    bool getOrderListUpToDate() const;
    
    //## auto_generated
    void setOrderListUpToDate(bool p_orderListUpToDate);

protected :

    double currentPos;		//## attribute currentPos
    
    double lastOrderTag;		//## attribute lastOrderTag

public :

    //## auto_generated
    std::list<Order>::const_iterator getOrderList() const;
    
    //## auto_generated
    void setOrderList(Order p_orderList);
    
    //## auto_generated
    Communication* getItsCommunication() const;
    
    //## auto_generated
    void setItsCommunication(Communication* p_Communication);

protected :

    std::list<Order> orderList;		//## attribute orderList
    
    Communication* itsCommunication;		//## link itsCommunication

public :

    //## operation createOrderlist2()
    void createOrderlist2();
    
    //## auto_generated
    Order* getLastOrder() const;
    
    //## auto_generated
    int getPassengerInTrain(int i1) const;
    
    //## auto_generated
    void setPassengerInTrain(int i1, int p_passengerInTrain);

protected :

    Order lastOrder;		//## attribute lastOrder
    
    int passengerInTrain[4];		//## attribute passengerInTrain
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/PiAlgorithm.h
*********************************************************************/
