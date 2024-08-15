#pragma once

class BaseClass
{
public:
   virtual ~BaseClass() = default;

   virtual BaseClass* Clone() = 0;
};