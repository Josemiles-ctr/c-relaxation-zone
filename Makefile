# Variables
TARGET:=growth

OUTPUT_DIR:=build

CFLAGS= -Wall -Wextra -Iinclude

CC:=gcc

SRC:= main.c $(wildcard src/*.c)

OBJ:= $(SRC:%.c=$(OUTPUT_DIR)/%.o)

## Compiling source files to object files
$(OUTPUT_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $<

## Linking object files to create the final executable
$(OUTPUT_DIR)/$(TARGET): $(OBJ)
	mkdir -p $(dir $@)
	$(CC) -o $@ $^
# Some Helpful methods
.PHONY: all run

all: $(OUTPUT_DIR)/$(TARGET)
run:
	./$(OUTPUT_DIR)/$(TARGET)
