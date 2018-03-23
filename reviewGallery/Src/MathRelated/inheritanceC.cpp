#include "inheritanceC.h"
#include <iostream>
#include <string>

inheritanceC::inheritanceC()
    : words("Below should be the composition function yet again.\n\n")
{
    std::cout << words;
}

inheritanceC::~inheritanceC()
{
}
