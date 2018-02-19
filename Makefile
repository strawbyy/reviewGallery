CC=g++
CFLAGS=-c -Wall

all: start

start: main.o mathFunctions.o calculatorC.o generalFunctions.o
		$(CC) main.o mathFunctions.o calculatorC.o generalFunctions.o -o programExec

main.o: main.cpp
		$(CC) $(CFLAGS) main.cpp
		
mathFunctions.o: mathFunctions.cpp
		$(CC) $(CFLAGS) mathFunctions.cpp

calculatorC.o: calculatorC.cpp
		$(CC) $(CFLAGS) calculatorC.cpp

generalFunctions.o: generalFunctions.cpp
		$(CC) $(CFLAGS) generalFunctions.cpp

clean:
	rm *.o programExec


