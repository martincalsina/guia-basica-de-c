CC = gcc
CFLAGS = -Wall -Wextra -pedantic
TARGET = binario

OBJS = $(SRCS:.c=.o)


all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

-include $(OBJS:.o=.d)

clean:
	rm *.o $(TARGET)

.PHONY: all clean