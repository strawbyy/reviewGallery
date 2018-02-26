#include <iostream>
#include "operatorClass.h"

operatorClass::operatorClass() {}

operatorClass::operatorClass(int number1)
{
    numberToAdd = number1;
}

operatorClass operatorClass::operator+(operatorClass oco)
{
    operatorClass oco2;
    oco2.numberToAdd = numberToAdd + oco2.numberToAdd;
    return (oco2);
}
