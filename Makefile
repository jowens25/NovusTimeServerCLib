CC = gcc
CFLAGS = -Wall -g
SOURCES = $(wildcard *.c)
OBJECTS = $(SOURCES:.c=.o)
TARGET = main

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean build_and_clean

clean:
	rm -f $(TARGET) $(OBJECTS)

# Custom target to build, then clean
build_and_clean: $(TARGET)
	$(MAKE) clean
