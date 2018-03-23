#include <iostream>
#include <string>
#include <limits>
#include "composition2C.h"
#include "compositionC.h" // Include the class header file you wanna compose with.

composition2C::composition2C()
{
}

void composition2C::getSecondPart(){
    std::cout << "Enter the second part of the sentence \n";
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); -- This line was causing weird issues, man.
    std::getline(std::cin, secondPart);
}

void composition2C::printSentence()
{   
    compositionC compositionCc; // When doing composition, remember to actually make the object.
    getSecondPart();
    std::cout << "\nThe full sentence is:\n" << compositionCc.firstPart << " " << secondPart << std::endl;
}
