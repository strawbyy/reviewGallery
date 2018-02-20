#include <iostream>
#include <stdlib.h>
#include <string>
int numTest(int num1, int num2);
int numTest();
void nTestFunction();
int calculatorFunction();
void countdownLoop();
void countUpLoop();
void arrayTut();


void tutorialChoice(){
    int tutorialNum;
    int* tutorialNumPtr = &tutorialNum;
    std::cout << "Choose one of the following options or enter -1 to exit.\n";
    std::cout << "1:Function overloading\n2:Basic Calculator.\n3:A countdown\n4:Even/Odd list.\n5:What are arrays?\n";
    std::cin >> tutorialNum;
    std::cout << "\n";
    do {
        switch(tutorialNum){
            case 1:
                nTestFunction();
                std::cout << "\n\n";
                tutorialChoice();
                break;
            case 2:
                calculatorFunction();
                std::cout << "\n\n";
                tutorialChoice();
                break;
            case 3:
                countdownLoop();
                std::cout << "\n\n";
                tutorialChoice();
                break;
            case 4:
                countUpLoop();
                std::cout << "\n\n";
                tutorialChoice();
                break;
            case 5:
                arrayTut();
                std::cout << "\n\n";
                tutorialChoice();
                break;
            default:
                if(tutorialNum!=-1){
                tutorialChoice();
                }else{
                    exit(0);
                }
        }
    }while(tutorialNum!=-1);
    exit(0);
}

void countdownLoop(){
    int counts;
    std::cout << "Where should the countdown start?\n";
    std::cin >> counts;
    if(counts==-1){
        exit(0);
    }else{
        counts--;
        while(counts>0){
            std::cout << counts << "\n";
            counts--;
        }
    }
}

void countUpLoop(){
    std::cout << "This program will show either all the even numbers or odd numbers between 2 numbers. Type letters any time to quit. \n";
    int i;
    int increment;
    int x;
    std::cout << "Enter which number do you want to count from: \n";
    std::cin >> i;
    if(std::cin.fail()){
        exit(0);
    }
    std::cout << "Enter which number do you want to count to: \n";
    std::cin >> x;
    if(std::cin.fail()){
        exit(0);
    }
    std::cout << "Enter 2 for even numbers, 3 for odd numbers. Any other number will cause an error.\n";
    std::cin >> increment;
    if(std::cin.fail()){
        exit(0);
    }
    if(increment==2 || increment==3){
        for(i; i<x; i+=increment){
            std::cout << i << "\n";
        }
    }
    
}

void arrayTut(){
    std::srand(time(0));
    int randomNumArray[5] = {(std::rand()%6),((std::rand()%6)*2),((std::rand()%6)*(std::rand()%13)),(std::rand()%100),((std::rand()%20)*3)};
    std::cout << "Here are all the random numbers from an array: "; 
    for(int i=0; i<4; i++){
        std::cout << randomNumArray[i] << ", ";
    }
    std::cout << randomNumArray[4] << ".\n";
    std::cout << "To change them, you will be presented with a series of inputs. \nThe next 5 numbers you input will be the new values: ";
    for (int i=0; i<5; i++){
        std::cin >> randomNumArray[i];
        if(randomNumArray[i]==-1){
            exit(0);
        }
    }
    std::cout << "The new array numbers are: ";
    for(int i=0; i<4; i++){
        std::cout << randomNumArray[i] << ", ";
    }
    std::cout << randomNumArray[4] << ".\n";

    
}
