# Variables
TARGET := growth

OUTPUT_DIR:=build

CFLAGS= -Wall -Wextra -Iinclude

CC:=gcc

SRC:= main.c $(wildcard src/*.c)

OBJ:= $(SRC:%.c= $(OUTPUT_DIR)/%.o)

$(OUTPUT_DIR)/%.o: %.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c -o $@ $<

$(OUTPUT_DIR)/$(TARGET): $(OBJ)
	mkdir -p $(dir $@)
	$(CC) -o $@ $^
# Some Helpful methods
.PHONY: all run

all: $(OUTPUT_DIR)/$(TARGET)
run:
	./$(OUTPUT_DIR)/$(TARGET)
