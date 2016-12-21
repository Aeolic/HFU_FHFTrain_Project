/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: DefaultConfig
	Model Element	: Order
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/DefaultConfig/Order.h
*********************************************************************/

#ifndef Order_H
#define Order_H

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
//## package Pi

//## class Order

using namespace std;

class Order {
    ////    Constructors and destructors    ////
    
public :

    //## operation Order(int,double,int)
    Order(int bSp, double tag, int aSp);
    
    //## auto_generated
    Order();
    
    //## auto_generated
    ~Order();
    
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
    double getTag() const;
    
    //## auto_generated
    void setTag(double p_tag);
    
    ////    Attributes    ////

protected :

    int afterSpeed;		//## attribute afterSpeed
    
    int beforeSpeed;		//## attribute beforeSpeed
    
    double tag;		//## attribute tag
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/DefaultConfig/Order.h
*********************************************************************/
