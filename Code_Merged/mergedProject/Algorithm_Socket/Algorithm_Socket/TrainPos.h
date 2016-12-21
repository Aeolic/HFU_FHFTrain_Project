/*********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: Algorithm_Socket 
	Configuration 	: Algorithm_Socket
	Model Element	: TrainPos
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainPos.h
*********************************************************************/

#ifndef TrainPos_H
#define TrainPos_H

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

//## class TrainPos

using namespace std;

class TrainPos {
    ////    Constructors and destructors    ////
    
public :

    //## operation TrainPos()
    TrainPos();
    
    //## auto_generated
    ~TrainPos();
    
    ////    Operations    ////
    
    //## operation updatePosition(string)
    void updatePosition(string position);
    
    ////    Additional operations    ////
    
    //## auto_generated
    bool getAlgCanRead() const;
    
    //## auto_generated
    void setAlgCanRead(bool p_algCanRead);
    
    //## auto_generated
    static int getId();
    
    //## auto_generated
    static void setId(int p_id);
    
    //## auto_generated
    int getPid() const;
    
    //## auto_generated
    void setPid(int p_pid);
    
    //## auto_generated
    double getPosition() const;
    
    //## auto_generated
    void setPosition(double p_position);
    
    ////    Attributes    ////

protected :

    bool algCanRead;		//## attribute algCanRead
    
    static int id;		//## attribute id
    
    int pid;		//## attribute pid
    
    double position;		//## attribute position
};

#endif
/*********************************************************************
	File Path	: Algorithm_Socket/Algorithm_Socket/TrainPos.h
*********************************************************************/
