// test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*
* 
* this structure is to gather different size of object which are instantiated by different profiling classes
*/

#include <iostream>
#include "string.h"
#include "ObjectInfo.h"

int main()
{

    class _AInfo : public ObjectInfo<_AInfo> {
       
    };
    class _BInfo : public ObjectInfo<_BInfo> {
        
    };
    
    struct _A {
        _AInfo m_info;
    };

    struct _B {
        _BInfo m_info;
    };
    

    struct _A a;
    struct _B b;

    
    //_AInfo a_info;
}
