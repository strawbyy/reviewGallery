#include "calculatorC.h"
#include <iostream>
#include "tutorialHeader.h"
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
    return this->result;
};
int calculatorC::subtractNumbers(float firstNum, float secondNum)
{
    result = firstNum - secondNum;
    return this->result;
};
int calculatorC::multiplyNumbers(float firstNum, float secondNum)
{
    result = firstNum * secondNum;
    return this->result;
};
int calculatorC::divideNumbers(float firstNum, float secondNum)
{
    result = firstNum / secondNum;
    return this->result;
};
int calculatorC::findRemainder(int firstNum, int secondNum)
{
    result = firstNum % secondNum;
    return this->result;
};
void calculatorC::printResult()
{
    std::cout << this->result << "\n";
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
        std::cout << std::endl;
        tutorialChoice();
    }
}
calculatorC::~calculatorC()
{
    nextCalculation();
}