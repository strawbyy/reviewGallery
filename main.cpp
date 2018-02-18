/*

Made by Strawbyy

The concepts learned are from Bucky's C++ tutorial. 
The playlist can be found here: https://www.youtube.com/watch?v=tvC1WCdV1XU&index=1&list=PLAE85DE8440AA6B83
OS Used: Linux Ubuntu 17.10
Editor used: Visual Studio Code.
Compiled: Using g++

If I actually sent this to someone, thanks for actually looking at it!

*/

#include <iostream>
#include <stdlib.h>
#include <string>

//Prototype those functions!
int numTest(int num1, int num2);
int numTest();
void nTestFunction();
int calculatorFunction();

// Here I just added a class within the main.cpp, just because I learned to do that. Might as well review everything! 
// might be a bad habit though, oops.

class calculatorC{
    public:
        int addNumbers(int firstNum, int secondNum){
            result = firstNum + secondNum;
            return result; 
        };
        int subtractNumbers(int firstNum, int secondNum){
            result = firstNum - secondNum;
            return result;
        };
        int multiplyNumbers(int firstNum, int secondNum){
            result = firstNum * secondNum;
            return result;
        };
        int divideNumbers(int firstNum, int secondNum){
            result = firstNum / secondNum;
            return result;
        };
        int findRemainder(int firstNum, int secondNum){
            result = firstNum % secondNum;
            return result;
        };
        void printResult(){
            std::cout << result << "\n";
        }
    private:
        int result;    
};

int main(){

    std::cout << "Hello world! \n";
    std::cout << "Welcome to my concept review gallery!.\n\n";
    
    std::cout << "Would you like to learn about the c++ language? (Y/N)\n";
    std::string confirmation;
    std::cin >> confirmation;
    if(confirmation=="y"){
        std::cout << "Excellent! Let's carry on. \n\n";
    }else{
        exit(0);
    }
    
    int tutorialNum;
    std::cout << "Let's begin by reviewing concepts. Choose one of the following options or enter -1 to exit.\n";
    std::cout << "1:Function overloading\n2:Basic Calculator.\n";
    std::cin >> tutorialNum;
    std::cout << "\n";
    while(tutorialNum!=-1){
        switch(tutorialNum){
            case 1:
                nTestFunction();
                break;
            case 2:
                calculatorFunction();
                break;
            default:
                exit(0);
        }
    }    
    return 0;
}

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

int calculatorFunction(){
    calculatorC calcO;
    int num1;
    int num2;
    std::cout << "Input -1 at any time to quit. \n\n";
    int mathOperation;
    std::cout << "Enter your first number. \n";
    std::cin >> num1;
    if(num1==-1){
        exit(0);
    }
    std::cout << "Enter your operation (1 for addition , 2 for subtraction , 3 for division , 4 for multiplication or 5 to find remainder.)\n";
    std::cin >> mathOperation;
    if(mathOperation==-1){
        exit(0);
    }
    std::cout << "Enter the second/final number.\n";
    std::cin >> num2;
    if(num2==-1){
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





