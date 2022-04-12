#include <iostream>
#include "logger.h"

void foo()
{
    LOG_DEBUG("test log macro ");
}
int main()
{   
    foo();
    return 0;
}

