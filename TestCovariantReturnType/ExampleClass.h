#pragma once

#include "BaseClass.h"

#include <memory>

template<typename T>
class TemplatedClass;

class ExampleClass : public BaseClass
{
public:

   ExampleClass* Clone() override;

private:
   std::shared_ptr<TemplatedClass<ExampleClass>> _templateMemberVar;
};