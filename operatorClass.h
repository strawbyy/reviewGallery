#ifndef operatorClass_h
#define operatorClass_h

class operatorClass
{
public:
  operatorClass();
  operatorClass(int);
  operatorClass operator+(operatorClass);
  int numberToAdd;
};

#endif // operatorClass_h