#ifndef COMPOSITION2_C
#define COMPOSITION2_C
#include <string>
#include "compositionC.h"

class composition2C
{

  public:
    composition2C();
    void getSecondPart();
    void printSentence();

  private:
    std::string secondPart;
};

#endif // COMPOSITION2_C