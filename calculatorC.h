#ifndef calculatorC_h
#define calculatorC_h 

class calculatorC{
    public:
        calculatorC();
        int addNumbers(float, float);
        int subtractNumbers(float, float);
        int multiplyNumbers(float, float);
        int divideNumbers(float, float);
        int findRemainder(int, int);
        void printResult();
        void nextCalculation();
        ~calculatorC();
    private:
        float result;    
};


#endif // calculatorC_h
