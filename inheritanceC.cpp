#include "inheritanceC.h"
#include <iostream>
#include <string>

inheritanceC::inheritanceC()
    : words("^Above should be the calculator constructor.\n\n")
{
    std::cout << words;
}

inheritanceC::~inheritanceC()
{
}
