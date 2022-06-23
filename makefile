src ?= main
SOURCE_FILE = $(src).cpp
CC = g++
BIN_FILE = $(src).bin

default: $(SOURCE_FILE)
	$(CC) $^ -o $(BIN_FILE)
	./$(BIN_FILE)

clean:
	rm *.bin
