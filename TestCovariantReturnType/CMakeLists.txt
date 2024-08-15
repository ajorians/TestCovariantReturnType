add_executable(TestCovariantReturnType
               BaseClass.cpp
               BaseClass.h
               ExampleClass.cpp
               ExampleClass.h
               TemplatedClass.cpp
               TemplatedClass.h
               main.cpp)

set_property(TARGET TestCovariantReturnType PROPERTY CXX_STANDARD 20)

