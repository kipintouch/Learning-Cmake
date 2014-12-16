#include "hello.h"

void hello_world(void)
{
    std::cout << "Hello World Welcome to Cmake Learning Files" << std::endl;
}

void hello_world(std::string &name)
{
    std::cout << "Hello " << name << " World Welcome to Cmake Learning Files" << std::endl;
}

