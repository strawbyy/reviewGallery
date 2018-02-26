CC=g++
CFLAGS=-c -Wall

all: start

start: clean main.o mathFunctions.o calculatorC.o generalFunctions.o operatorClass.o
		$(CC) main.o mathFunctions.o calculatorC.o generalFunctions.o operatorClass.o -o programExec

main.o: main.cpp
		$(CC) $(CFLAGS) main.cpp
		
mathFunctions.o: mathFunctions.cpp
		$(CC) $(CFLAGS) mathFunctions.cpp

calculatorC.o: calculatorC.cpp
		$(CC) $(CFLAGS) calculatorC.cpp

generalFunctions.o: generalFunctions.cpp
		$(CC) $(CFLAGS) generalFunctions.cpp

operatorClass.o: operatorClass.cpp
		$(CC) $(CFLAGS) operatorClass.cpp
clean:
	rm *.o programExec


