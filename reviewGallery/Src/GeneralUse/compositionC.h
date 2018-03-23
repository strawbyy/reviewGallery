#ifndef COMPOSITIONC_H
#define COMPOSITIONC_H
#include "composition2C.h"

class compositionC{
    public:
        compositionC();
        void printInformation();
        std::string firstPart;
        

    friend void composedSentenceTut(compositionC &cco);
};   

#endif // COMPOSITIONC_H