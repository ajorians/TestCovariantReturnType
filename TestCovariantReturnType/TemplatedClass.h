#pragma once

#include "BaseClass.h"

template<class T>
class TemplatedClass : public BaseClass
{
public:

   void SomeBaseAMethod() override {}
   T* Clone() override;

   void SomeBaseClassMethod() override {}
};

template<class T>
T* TemplatedClass<T>::Clone()
{
   return nullptr;
}