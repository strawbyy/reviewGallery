#include "calculatorC.h"
#include <iostream>
#include <stdlib.h>
#include <string>

    calculatorC::calculatorC(){
        std::cout << "Calculate at your will! \n";
    };

    int calculatorC::addNumbers(int firstNum, int secondNum){
            result = firstNum + secondNum;
            return result; 
        };
    int calculatorC::subtractNumbers(int firstNum, int secondNum){
            result = firstNum - secondNum;
            return result;
        };
    int calculatorC::multiplyNumbers(int firstNum, int secondNum){
            result = firstNum * secondNum;
            return result;
        };
    int calculatorC::divideNumbers(int firstNum, int secondNum){
            result = firstNum / secondNum;
            return result;
        };
    int calculatorC::findRemainder(int firstNum, int secondNum){
            result = firstNum % secondNum;
            return result;
        };
    void calculatorC::printResult(){
            std::cout << result << "\n";
        } 