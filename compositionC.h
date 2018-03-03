#ifndef COMPOSITIONC_H
#define COMPOSITIONC_H

class compositionC{
    public:
        compositionC();
        void printInformation();
    private:
        std::string firstPart;

    friend void composedSentenceTut(compositionC &cco);
};   

#endif // COMPOSITIONC_H