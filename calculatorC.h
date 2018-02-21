#ifndef calculatorC_h
#define calculatorC_h 

class calculatorC{
    public:
        calculatorC();
        int addNumbers(float firstNum, float secondNum);
        int subtractNumbers(float firstNum, float secondNum);
        int multiplyNumbers(float firstNum, float secondNum);
        int divideNumbers(float firstNum, float secondNum);
        int findRemainder(int firstNum, int secondNum);
        void printResult();
        void nextCalculation();
        ~calculatorC();
    private:
        float result;    
};


#endif // calculatorC_h
