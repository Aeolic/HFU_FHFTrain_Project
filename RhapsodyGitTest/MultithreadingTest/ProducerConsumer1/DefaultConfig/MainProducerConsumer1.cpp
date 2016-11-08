/********************************************************************
	Rhapsody	: 8.1.1 
	Login		: oberhaus
	Component	: ProducerConsumer1 
	Configuration 	: DefaultConfig
	Model Element	: DefaultConfig
//!	Generated Date	: Tue, 08, Nov 2016  
	File Path	: ProducerConsumer1/DefaultConfig/MainProducerConsumer1.cpp
*********************************************************************/

//## auto_generated
#include "MainProducerConsumer1.h"
//## auto_generated
#include "ProdCon1.h"
int main(int argc, char* argv[]) {
    int status = 0;
    if(OXF::initialize())
        {
            ProdCon1 * p_ProdCon1;
            p_ProdCon1 = new ProdCon1;
            //#[ configuration ProducerConsumer1::DefaultConfig 
            //#]
            OXF::start();
            delete p_ProdCon1;
            status = 0;
        }
    else
        {
            status = 1;
        }
    return status;
}

/*********************************************************************
	File Path	: ProducerConsumer1/DefaultConfig/MainProducerConsumer1.cpp
*********************************************************************/
