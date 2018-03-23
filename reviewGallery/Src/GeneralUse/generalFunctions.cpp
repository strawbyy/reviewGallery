#include <iostream>
#include <stdlib.h>
#include <string>
#include "compositionC.h"
#include "composition2C.h"
#include "../MathRelated/inheritanceC.h"
#include "../MathRelated/calculatorC.h"

int numTest(int num1, int num2);
int numTest();
void nTestFunction();
extern void calculatorFunction();
void countdownLoop();
void countUpLoop();
void arrayTut();
void pointersTut();
int main();
extern int operatorOverloadingTutorial();
void composedSentenceTutActual();
void inheritanceTut();
void lineBreak();

void tutorialChoice()
{
    static int tutorialNum;
    std::cout << "Choose one of the following options or enter -1 to exit.\n";
    std::cout << "1:Function overloading\n2:Basic Calculator.\n3:A countdown\n4:Even/Odd list.\n5:What are arrays?\n6:Pointers and refrences:\n7:Operator Overloading\n"
                 "8:Composition\n9:Inheritance\n";
    std::cout << "Your option: ";
    std::cin >> tutorialNum;
    std::cout << "\n";
    do
    {
        switch (tutorialNum)
        {
        case 1:
            nTestFunction();
            lineBreak();
            tutorialChoice();
            break;
        case 2:
            calculatorFunction();
            lineBreak();
            tutorialChoice();
            break;
        case 3:
            countdownLoop();
            lineBreak();
            tutorialChoice();
            break;
        case 4:
            countUpLoop();
            lineBreak();
            tutorialChoice();
            break;
        case 5:
            arrayTut();
            lineBreak();
            tutorialChoice();
            break;
        case 6:
            pointersTut();
            lineBreak();
            tutorialChoice();
            break;
        case 7:
            //operatorOverloadingTutorial();
            lineBreak();
            tutorialChoice();
            break;
        case 8:
            composedSentenceTutActual();
            lineBreak();
            tutorialChoice();
            break;
        case 9:
            inheritanceTut();
            lineBreak();
            tutorialChoice();
            break;
        default:
            if (tutorialNum != -1)
            {
                tutorialChoice();
            }
            else
            {
                exit(0);
            }
        }
    } while (tutorialNum != -1);
    exit(0);
}

void countdownLoop()
{
    int counts;
    std::cout << "Where should the countdown start?\n";
    std::cin >> counts;
    if (counts == -1)
    {
        exit(0);
    }
    else
    {
        counts--;
        while (counts > 0)
        {
            std::cout << counts << "\n";
            counts--;
        }
    }
}

void arrayTut()
{
    std::srand(23423);
    int randomNumArray[5] = {(std::rand() % 6), ((std::rand() % 6) * 2), ((std::rand() % 6) * (std::rand() % 13)), (std::rand() % 100), ((std::rand() % 20) * 3)};
    std::cout << "Here are all the random numbers from an array: ";
    for (int i = 0; i < 4; i++)
    {
        std::cout << randomNumArray[i] << ", ";
    }
    std::cout << randomNumArray[4] << ".\n";
    std::cout << "To change them, you will be presented with a series of inputs. \nThe next 5 numbers you input will be the new values: ";
    for (int i = 0; i < 5; i++)
    {
        try
        {
            std::cin >> randomNumArray[i];
            if (std::cin.fail())
            {
                for (int i = 0; i < 5; i++)
                {
                    randomNumArray[i] = 0;
                }
                throw 1;
            }
            if (randomNumArray[i] == -1)
            {
                exit(0);
            }
        }
        catch (int e)
        {
            std::cout << "\nError " << e << ", please enter a valid integer\n";
            for (int i = 0; i < 5; i++)
            {
                randomNumArray[i] = 1;
            }
            exit(0);
        }
    }
    std::cout << "The new array numbers are: ";
    for (int i = 0; i < 4; i++)
    {
        std::cout << randomNumArray[i] << ", ";
    }
    std::cout << randomNumArray[4] << ".\n";

    std::string nameArray[2][3] = {{"Michael", "shaheen", "andrew"}, {"Fox", "strawby", "lenny"}};

    std::cout << "Here is a multidimentional array: \n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << nameArray[0][i] << " ";
        std::cout << nameArray[1][i] << " ";
        std::cout << std::endl;
    }
}

void pointersTut()
{
    int aNumber = 5;
    int bNumber = 10;
    int *aPointer = &aNumber;
    int &bRefrence = bNumber;

    std::cout << "Here's a pointer: " << aPointer << " and here's a refrence: " << bRefrence << "\n\nThe difference is, the pointer holds a memory address while a refrence is just\nthat,"
                                                                                                "a refrence to a variable. Adding numbers to a pointer does not change the\nvalue of the number, instead it shits its memory location. While adding to a\nrefrence does change the value"
                                                                                                "\nAn example of this is the following. 2 will be added to both the refrence and the pointer.\nOriginal value of the aNumber is 5, while bNumber is 10. Pointer points to a, refrence to b.\n\n";

    aPointer += 2;
    bRefrence += 2;

    std::cout << "Here's the pointer: " << aPointer << " and here's the refrence: " << bRefrence << "\nYou can see that in this case, int values hold 4 bytes of memory.\nWe can confirm this by using sizeof(variable)\n";
    std::cout << "The size of an integer variable is " << sizeof(aNumber) << std::endl;
}

void composedSentenceTutActual()
{
    composition2C composed2Obj;
    composed2Obj.printSentence();
}

void inheritanceTut()
{
    inheritanceC inheritanceObj;
    inheritanceObj.printSentence();
}

inline void lineBreak(){
    std::cout << "-------------------------------------------------\n";
}