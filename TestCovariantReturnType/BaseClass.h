#pragma once

class BaseA
{
public:
   virtual ~BaseA() = default;

   virtual void SomeBaseAMethod() = 0;
};

class BaseB
{
public:
   virtual ~BaseB() = default;

   virtual BaseB* Clone() = 0;
};

class BaseClass : public BaseA
                , public BaseB
{
public:
   virtual ~BaseClass() = default;

   virtual void SomeBaseClassMethod() = 0;
};