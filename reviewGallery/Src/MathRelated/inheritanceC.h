#ifndef INHERITANCEC_H
#define INHERITANCEC_H
#include <string>
#include "../GeneralUse/composition2C.h"

class inheritanceC: public composition2C
{
  public:
    inheritanceC();
    ~inheritanceC();

  protected:
    std::string words;
};

#endif // INHERITANCEC_H