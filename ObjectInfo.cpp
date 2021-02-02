#include "StdAfx.h"
#include "ObjectInfo.h"
#include <iostream>
#include "TimePrinter.h"

using namespace std;
int ObjectInfo::m_counter = 0;
ObjectInfo::ObjectInfo(const char* name) :
m_objectName(name)
{
   m_objectNumber = ++m_counter;
   cout << "Object: " << m_objectName << "# " << m_objectNumber << " created @ " << TimePrinter() << endl;
}


ObjectInfo::~ObjectInfo(void)
{
   cout << "Object: " << m_objectName << "# " << m_objectNumber << " destroyed @ " << TimePrinter() << endl;
}

// the use pattern
struct _AInfo : public ObjectInfo {
   _AInfo() : ObjectInfo("_A") {}
};

struct _A {
   _AInfo m_info;
};
