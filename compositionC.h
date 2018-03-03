#ifndef COMPOSITIONC_H
#define COMPOSITIONC_H

class compositionC{
    public:
        compositionC();
        void printInformation();
    private:
        char firstPart[256];

    friend void composedSentenceTut(compositionC &cco);
};   

#endif // COMPOSITIONC_H