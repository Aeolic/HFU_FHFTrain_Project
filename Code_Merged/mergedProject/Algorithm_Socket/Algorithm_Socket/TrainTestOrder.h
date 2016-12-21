/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainTestOrder
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestOrder.h
*********************************************************************/

#ifndef TrainTestOrder_H
#define TrainTestOrder_H

//#[ ignore
#ifdef _MSC_VER
// disable Microsoft compiler warning (debug information truncated)
#pragma warning(disable: 4786)
#endif
//#]

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include <string>
//## auto_generated
#include <algorithm>
//## package TrainTest

//## class TrainTestOrder

using namespace std;

class TrainTestOrder {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    TrainTestOrder();
    
    //## auto_generated
    ~TrainTestOrder();
    
    ////    Operations    ////
    
    //## operation getTag()
    double getTag();
    
    //## operation newOrder(string)
    void newOrder(string order);
    
    ////    Additional operations    ////
    
    //## auto_generated
    int getAfterSpeed() const;
    
    //## auto_generated
    void setAfterSpeed(int p_afterSpeed);
    
    //## auto_generated
    int getBeforeSpeed() const;
    
    //## auto_generated
    void setBeforeSpeed(int p_beforeSpeed);
    
    //## auto_generated
    bool getNewTag() const;
    
    //## auto_generated
    void setNewTag(bool p_newTag);
    
    //## auto_generated
    void setTag(double p_tag);
    
    ////    Attributes    ////

protected :

    int afterSpeed;		//## attribute afterSpeed
    
    int beforeSpeed;		//## attribute beforeSpeed
    
    bool newTag;		//## attribute newTag
    
    double tag;		//## attribute tag
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainTestOrder.h
*********************************************************************/
