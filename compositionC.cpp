#include <iostream>
#include <string>
#include "compositionC.h"

compositionC::compositionC(){
    std::cout << "Hello please enter the first part of the sentence:\n";
    std::cin >> firstPart;
    std::cin.getline (firstPart, 256);
    std::cout << std::endl;
}


void compositionC::printInformation(){
    std::cout << firstPart;
}