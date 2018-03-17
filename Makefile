CC=g++
CFLAGS=-c -Wall -Werror

all: start

start: main.o mathFunctions.o calculatorC.o generalFunctions.o operatorClass.o compositionC.o composition2C.o inheritanceC.o
		$(CC) main.o mathFunctions.o calculatorC.o generalFunctions.o operatorClass.o compositionC.o composition2C.o inheritanceC.o -o programExec

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

composition2C.o: composition2C.cpp
		$(CC) $(CFLAGS) composition2C.cpp

inheritanceC.o: inheritanceC.cpp
		$(CC) $(CFLAGS) inheritanceC.cpp

clean:
	rm *.o
	rm programExec


