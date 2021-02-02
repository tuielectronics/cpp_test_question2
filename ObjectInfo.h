#pragma once

class ObjectInfo
{
public:
   ObjectInfo(const char* objectName);
   virtual ~ObjectInfo(void);

private:
   
   static int  m_counter;
   int         m_objectNumber;
   const char* m_objectName;
};
