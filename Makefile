CC=g++
CFLAGS=-c -Wall

all: start

start: main.o mathFunctions.o calculatorC.o generalFunctions.o operatorClass.o compositionC.o
		$(CC) main.o mathFunctions.o calculatorC.o generalFunctions.o operatorClass.o compositionC.o -o programExec

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

compositionC.o: compositionC.cpp
		$(CC) $(CFLAGS) compositionC.cpp
clean:
	rm *.o
	rm programExec


