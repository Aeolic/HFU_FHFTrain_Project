/********************************************************************
	Rhapsody	: 8.1.5 
	Login		: oberhaus
	Component	: SensRead_W 
	Configuration 	: SensRead_W
	Model Element	: Console
//!	Generated Date	: Wed, 21, Dec 2016  
	File Path	: SensRead_W/SensRead_W/Console.cpp
*********************************************************************/

//## auto_generated
#include "Console.h"
//## link itsSHM_Connection
#include "SHM_Connection.h"
//## package Common

//## class Console
Console::Console() {
    itsSHM_Connection = NULL;
    //#[ operation Console()
    float x ; 
    itsSHM_Connection = SHM_Connection::instance();
    
    while(1){
    std::cout << "please Enter Speed :  " << std::endl;
    std::cin >> x ;
    
    itsSHM_Connection ->save(Speed,x);
    }
    
    //#]
}

Console::~Console() {
    cleanUpRelations();
}

SHM_Connection* Console::getItsSHM_Connection() const {
    return itsSHM_Connection;
}

void Console::setItsSHM_Connection(SHM_Connection* p_SHM_Connection) {
    itsSHM_Connection = p_SHM_Connection;
}

void Console::cleanUpRelations() {
    if(itsSHM_Connection != NULL)
        {
            itsSHM_Connection = NULL;
        }
}

/*********************************************************************
	File Path	: SensRead_W/SensRead_W/Console.cpp
*********************************************************************/
