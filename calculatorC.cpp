#include "calculatorC.h"
#include <iostream>
#include <stdlib.h>
void calculatorFunction();
void calculatorFunction(float calculationResult);

calculatorC::calculatorC()
{
    std::cout << "Calculate at your will! \n";
};

int calculatorC::addNumbers(float firstNum, float secondNum)
{
    result = firstNum + secondNum;
    return result;
};
int calculatorC::subtractNumbers(float firstNum, float secondNum)
{
    result = firstNum - secondNum;
    return result;
};
int calculatorC::multiplyNumbers(float firstNum, float secondNum)
{
    result = firstNum * secondNum;
    return result;
};
int calculatorC::divideNumbers(float firstNum, float secondNum)
{
    result = firstNum / secondNum;
    return result;
};
int calculatorC::findRemainder(int firstNum, int secondNum)
{
    result = firstNum % secondNum;
    return result;
};
void calculatorC::printResult()
{
    std::cout << result << "\n";
}
void calculatorC::nextCalculation()
{
    std::cout << "Would you like to calculate again?\n1: Yes, 2: Yes, use last result, 3: No\n";
    int choice;
    std::cin >> choice;
    switch (choice)
    {
    case 1:
        calculatorFunction();
        break;
    case 2:
        calculatorFunction(result);
        break;
    default:
        exit(0);
    }
}
calculatorC::~calculatorC()
{
    nextCalculation();
}