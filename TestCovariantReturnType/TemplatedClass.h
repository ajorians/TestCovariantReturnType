#pragma once

#include "BaseClass.h"

template<typename T>
class TemplatedClass : public BaseClass
{
public:
   T* Clone() override;
};

template<typename T>
T* TemplatedClass<T>::Clone()
{
   return nullptr;
}