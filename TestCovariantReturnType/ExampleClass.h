#pragma once

#include "BaseClass.h"

#include <memory>

template<class T>
class TemplatedClass;

class ExampleClass : public BaseClass
{
public:
   template <class>
   friend class TemplatedClass;

   void SomeBaseAMethod() override {}
   ExampleClass* Clone() override;

   void SomeBaseClassMethod() override {}

private:
   std::shared_ptr<TemplatedClass<ExampleClass>> _templateMemberVar;
};