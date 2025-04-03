CC = gcc
CFLAGS = -Wall -Wextra -pedantic

all: mensaje_secreto

mensaje_secreto: mensaje_secreto.o
	$(CC) $(CFLAGS) mensaje_secreto.o -o mensaje_secreto

mensaje_secreto.o: mensaje_secreto.c
	$(CC) $(CFLAGS) -c mensaje_secreto.c -o mensaje_secreto.o

clean: 
	rm *.o hola

.PHONY: all clean