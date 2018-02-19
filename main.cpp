/*

*Made by Strawbyy

*The concepts learned are from Bucky's C++ tutorial. 
*The playlist can be found here: https://www.youtube.com/watch?v=tvC1WCdV1XU&index=1&list=PLAE85DE8440AA6B83
*OS Used: Linux Ubuntu 17.10
*Editor used: Visual Studio Code.
*Compiled: Using g++

*If I actually sent this to someone, thanks for actually looking at it!

*/

#include <iostream>
#include <stdlib.h>
#include <string>

//Prototype those functions!
int numTest(int num1, int num2);
int numTest();
void nTestFunction();
int calculatorFunction();
void countdownLoop();
void countUpLoop();
void arrayTut();

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
    std::cout << "1:Function overloading\n2:Basic Calculator.\n3:A countdown\n4: Even/Odd list.\n5:What are arrays?\n";
    std::cin >> tutorialNum;
    std::cout << "\n";
    while(tutorialNum!=-1){
        switch(tutorialNum){
            case 1:
                nTestFunction();
                exit(0);
                break;
            case 2:
                calculatorFunction();
                exit(0);
                break;
            case 3:
                countdownLoop();
                exit(0);
                break;
            case 4:
                countUpLoop();
                exit(0);
                break;
           case 5:
                arrayTut();
                exit(0);
                break;
            default:
                exit(0);
        }
    }    
    return 0;
}






