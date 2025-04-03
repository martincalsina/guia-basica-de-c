CC = gcc
CFLAGS = -Wall -Wextra -pedantic

all: casts

casts: casts.o
	$(CC) $(CFLAGS) casts.o -o casts

casts.o: casts.c
	$(CC) $(CFLAGS) -c casts.c -o casts.o

clean: 
	rm *.o hola

.PHONY: all clean