#ifndef INHERITANCEC_H
#define INHERITANCEC_H
#include <string>
#include "calculatorC.h"

class inheritanceC: public calculatorC
{
  public:
    inheritanceC();
    ~inheritanceC();

  protected:
    std::string words;
};

#endif // INHERITANCEC_H