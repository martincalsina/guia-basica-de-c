CC = gcc
CFLAGS = -Wall -Wextra -pedantic

all: datasize

datasize: datasize.o
	$(CC) $(CFLAGS) datasize.o -o datasize

datasize.o: datasize.c
	$(CC) $(CFLAGS) -c datasize.c -o datasize.o

clean: 
	rm *.o hola

.PHONY: all clean