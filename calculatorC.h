#ifndef calculatorC_h
#define calculatorC_h 

class calculatorC{
    public:
        calculatorC();
        int addNumbers(int firstNum, int secondNum);
        int subtractNumbers(int firstNum, int secondNum);
        int multiplyNumbers(int firstNum, int secondNum);
        int divideNumbers(int firstNum, int secondNum);
        int findRemainder(int firstNum, int secondNum);
        void printResult();
        void nextCalculation();
        ~calculatorC();
    private:
        int result;    
};


#endif // calculatorC_h
