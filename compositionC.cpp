#include <iostream>
#include <string>
#include <limits>
#include "compositionC.h"

compositionC::compositionC()
{
    std::cout << "Hello please enter the first part of the sentence:\n";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // This is used to avoid a corrupted input buffer
    std::getline(std::cin, firstPart);
    std::cout << std::endl;
}
