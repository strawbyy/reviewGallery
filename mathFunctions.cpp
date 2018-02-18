#include <iostream>
#include <stdlib.h>
#include <string>
#include "calculatorC.h"

int numTest(int num1, int num2){
    int total = num1 + num2;
    return total;
}

int numTest(){
    std::string errorMessage = "No values, so here is a zero. ";
    std::cout << errorMessage;
    return 0;
}

void nTestFunction(){
    // Yes, this part would have been much better if it was one function(numTest) with an if statement. This is just me trying to review as many things as I can. E.g: Overloading functions.
    std::cout << "\n\nThis simply tests the concept of overloading functions. \n";
    std::cout << "Notice the source code has 2 functions with the same name, however applying different parameters changed how they work. \n";
    std::cout << "Number from function with permaters = " << numTest(1,2) << "\n";
    std::cout << "Numbers without parameters = " << numTest() << "\n";
}

void calculatorFunction(){
    calculatorC calcO;
    int num1;
    int num2;
    std::cout << "Input letters at any time to quit. \n\n";
    int mathOperation;
    std::cout << "Enter your first number. \n";
    std::cin >> num1;
    if(std::cin.fail()){
        exit(0);
    }
    std::cout << "Enter your operation (1 for addition , 2 for subtraction , 3 for division , 4 for multiplication or 5 to find remainder.) \n";
    std::cin >> mathOperation;
    if(std::cin.fail()){
        exit(0);
    }
    std::cout << "Enter the second/final number.\n";
    std::cin >> num2;
    if(std::cin.fail()){
        exit(0);
    }

    switch(mathOperation){
        case 1:
            calcO.addNumbers(num1,num2);
            break;
        case 2:
            calcO.subtractNumbers(num1,num2);
            break;
        case 3:
            calcO.divideNumbers(num1,num2);
            break;
        case 4:
            calcO.multiplyNumbers(num1,num2);
            break;
        case 5:
            calcO.findRemainder(num1,num2);
            break;
        default:
            std::cout << "Invalid mathematical operation. Please try again \n";
            calculatorFunction();
    }

    calcO.printResult();

}
