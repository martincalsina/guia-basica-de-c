CC = gcc
CFLAGS = -Wall -Wextra -pedantic

all: operators

operators: operators.o
	$(CC) $(CFLAGS) operators.o -o operators

operators.o: operators.c
	$(CC) $(CFLAGS) -c operators.c -o operators.o

clean: 
	rm *.o hola

.PHONY: all clean