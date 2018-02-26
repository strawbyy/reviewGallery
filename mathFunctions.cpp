#include <iostream>
#include <stdlib.h>
#include <string>
#include <cmath>
#include "calculatorC.h"
#include "operatorClass.h"

bool isEven(float numberToTest);

int numTest(int num1, int num2)
{
    int total = num1 + num2;
    return total;
}

int numTest()
{
    std::string errorMessage = "No values, so here is a zero. ";
    std::cout << errorMessage;
    return 0;
}

void nTestFunction()
{
    // Yes, this part would have been much better if it was one function(numTest) with an if statement. This is just me trying to review as many things as I can. E.g: Overloading functions.
    std::cout << "\n\nThis simply tests the concept of overloading functions. \n";
    std::cout << "Notice the source code has 2 functions with the same name, however applying different parameters changed how they work. \n";
    std::cout << "Number from function with permaters = " << numTest(1, 2) << "\n";
    std::cout << "Numbers without parameters = " << numTest() << "\n";
}

void calculatorFunction()
{
    calculatorC calcO;
    float num1;
    float num2;
    std::cout << "Input letters at any time to quit. \n\n";
    int mathOperation;
    std::cout << "Enter your first number. \n";
    std::cin >> num1;
    if (std::cin.fail())
    {
        exit(0);
    }
    std::cout << "Enter your operation (1 for addition , 2 for subtraction , 3 for division , 4 for multiplication or 5 to find remainder.) \n";
    std::cin >> mathOperation;
    if (std::cin.fail())
    {
        exit(0);
    }
    std::cout << "Enter the second/final number.\n";
    std::cin >> num2;
    if (std::cin.fail())
    {
        exit(0);
    }
    switch (mathOperation)
    {
    case 1:
        calcO.addNumbers(num1, num2);
        break;
    case 2:
        calcO.subtractNumbers(num1, num2);
        break;
    case 3:
        calcO.divideNumbers(num1, num2);
        break;
    case 4:
        calcO.multiplyNumbers(num1, num2);
        break;
    case 5:
        calcO.findRemainder(num1, num2);
        break;
    default:
        std::cout << "Invalid mathematical operation. Please try again \n";
        // Here, I used recursion to bounce back up and redo the program since it failed.
        calculatorFunction();
    }
    calcO.printResult();
}

// This function overload is used to to keep the calculation continuous by taking the result and using it as num1 instead.
void calculatorFunction(float calculationResult)
{
    calculatorC calcO;
    float num1 = calculationResult;
    float num2;
    std::cout << "Input letters at any time to quit. \n\n";
    int mathOperation;
    std::cout << "Enter your operation (1 for addition , 2 for subtraction , 3 for division , 4 for multiplication or 5 to find remainder.) \n";
    std::cin >> mathOperation;
    if (std::cin.fail())
    {
        exit(0);
    }
    std::cout << "Enter the second/final number.\n";
    std::cin >> num2;
    if (std::cin.fail())
    {
        exit(0);
    }
    switch (mathOperation)
    {
    case 1:
        calcO.addNumbers(num1, num2);
        break;
    case 2:
        calcO.subtractNumbers(num1, num2);
        break;
    case 3:
        calcO.divideNumbers(num1, num2);
        break;
    case 4:
        calcO.multiplyNumbers(num1, num2);
        break;
    case 5:
        calcO.findRemainder(num1, num2);
        break;
    default:
        std::cout << "Invalid mathematical operation. Please try again \n";
        // Here, I used recursion to bounce back up and redo the program since it failed.
        calculatorFunction(num1);
    }

    calcO.printResult();
}

void operatorOverloadingTutorial()
{
    int opObjnum1;
    int opObjnum2;
    std::cout << "We willl add numbers together through objects.\nInput the first number:";
    std::cin >> opObjnum1;
    std::cout << "Input the second number:";
    std::cin >> opObjnum2;
    operatorClass operatorObject(opObjnum1);
    operatorClass operatorObject2(opObjnum2);
    operatorClass operatorObject3;

    operatorObject3 = operatorObject + operatorObject2;
    std::cout << "\nThe answer is: " << operatorObject3.numberToAdd;
}

void countUpLoop()
{
    std::cout << "This program will show either all the even numbers or odd numbers between 2 numbers. Type letters any time to quit. \n";
    float initialNumberInputted;
    int increment;
    int targetNumber;
    std::cout << "Enter which number do you want to count from: \n";
    std::cin >> initialNumberInputted;
    if (std::cin.fail())
    {
        exit(0);
    }
    std::cout << "Enter which number do you want to count to: \n";
    std::cin >> targetNumber;
    if (std::cin.fail())
    {
        exit(0);
    }
    std::cout << "Enter 1 for odd numbers, 2 for even numbers. Any other number will cause an error.\n";
    std::cin >> increment;
    if (std::cin.fail())
    {
        exit(0);
    }
    initialNumberInputted++;
    if (increment == 1 || increment == 2)
    {
        std::cout << "\nThe list of your ";
        if (increment == 2)
        {
            std::cout << "even numbers is: ";
            for (float initialNumber=initialNumberInputted; initialNumber < targetNumber; initialNumber++)
            {
                bool evenNumber = isEven(initialNumber);
                if (evenNumber == true)
                {
                    if (initialNumber == targetNumber - increment)
                    {
                        std::cout << initialNumber << ".";
                    }
                    else
                    {
                        std::cout << initialNumber << ", ";
                    }
                }
            }
        }
        else
        {
            std::cout << "odd numbers is: ";
            for (float initialNumber=initialNumberInputted; initialNumber < targetNumber; initialNumber++)
            {
                bool evenNumber = isEven(initialNumber);
                if (evenNumber == false)
                {
                    if (initialNumber == targetNumber - increment)
                    {
                        std::cout << initialNumber << ".";
                    }
                    else
                    {
                        std::cout << initialNumber << ", ";
                    }
                }
            }
        }
    }
}

bool isEven(float numberToTest)
{
    return std::floor(numberToTest / 2) == numberToTest;
}