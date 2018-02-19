#include <iostream>
#include <stdlib.h>
#include <string>

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
    std::cout << "Enter which number you want to come from: \n";
    std::cin >> i;
    if(std::cin.fail()){
        exit(0);
    }
    std::cout << "Enter which number you want to come to: \n";
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
}
