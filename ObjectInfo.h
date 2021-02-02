/*
* use class template for a better solution of profiling classes
*/

#pragma once
#include <iostream>
#include "TP.h" //TimePrinter
template <typename T>
struct ObjectInfo
{
    TP tp;
    static int objectSize;
    static int heapSize;
    ObjectInfo()
    {
        
        ++objectSize;

        std::cout << "Object: " << typeid(T).name() << "# " << objectSize << " created at " << tp.TimePrinter() <<"\n";
    }

    ObjectInfo(const ObjectInfo&)
    {
        
        ++objectSize;
        ++heapSize; //created on heap
        std::cout << "Object: " << typeid(T).name() << "# " << objectSize << " created at " << tp.TimePrinter() << "\n";
    }
protected:
    ~ObjectInfo() // objects should never be removed through pointers of this type
    {
        --objectSize;
        --heapSize;
        std::cout << "Object : " << typeid(T).name() << "# " << objectSize << " destroyed at " << tp.TimePrinter() << "\n";
    }
}; 
template <typename T> int ObjectInfo<T>::objectSize(0);
template <typename T> int ObjectInfo<T>::heapSize(0);
