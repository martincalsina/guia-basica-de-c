CC = gcc
CFLAGS = -Wall -Wextra -pedantic

all: checkupperlower

checkupperlower: checkupperlower.o
	$(CC) $(CFLAGS) checkupperlower.o -o checkupperlower

checkupperlower.o: checkupperlower.c
	$(CC) $(CFLAGS) -c checkupperlower.c -o checkupperlower.o

clean: 
	rm *.o hola

.PHONY: all clean