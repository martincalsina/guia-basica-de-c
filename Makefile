CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = rolldice

all: $(TARGET)

$(TARGET): $(TARGET).o
	$(CC) $(FLAGS) $^ -o $@

$(TARGET).o: $(TARGET).c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm *.o $(TARGET)

.PHONY: all clean