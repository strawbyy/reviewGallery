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
#include <cctype>

//Prototype those functions!
int numTest(int num1, int num2);
int numTest();
void nTestFunction();
int calculatorFunction();
void countdownLoop();
void countUpLoop();
void arrayTut();
void tutorialChoice();

int main()
{

    std::cout << "Hello world! \n";
    std::cout << "Welcome to my concept review gallery!.\n\n";

    std::cout << "Would you like to learn about the c++ language? (Y/N)\n";
    std::string confirmation;
    std::cin >> confirmation;
    for (std::string::iterator i = confirmation.begin(); i < confirmation.end(); i++)
    {
        *i = tolower(*i);
    }
    if (confirmation == "y" || confirmation == "yes")
    {
        std::cout << "Excellent! Let's carry on. \n\n";
        tutorialChoice();
    }
    else
    {
        exit(0);
    }
    return 0;
}
