/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SM_Read_T 
	Configuration 	: SM_Read_T
	Model Element	: ILCD
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SM_Read_T/SM_Read_T/ILCD.h
*********************************************************************/

#ifndef ILCD_H
#define ILCD_H

//## auto_generated
#include <oxf/oxf.h>
//## auto_generated
#include "SM_Read.h"
//## auto_generated
#include "Common.h"
//## package Common

//## class ILCD
class ILCD {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    ILCD();
    
    //## auto_generated
    virtual ~ILCD() = 0;
    
    ////    Operations    ////
    
    //## operation clear()
    virtual void clear() = 0;
    
    //## operation write_to_position(int,int,std::string)
    virtual void write_to_position(int x, int y, std::string data) = 0;

protected :

    //## operation lcd_write(std::string,int)
    virtual void lcd_write(std::string data, int line) = 0;
};

#endif
/*********************************************************************
	File Path	: SM_Read_T/SM_Read_T/ILCD.h
*********************************************************************/
