# Project configuration
TARGET := main
OUTPUT_DIR := build

CC := gcc
CFLAGS := -Wall -Wextra -Wpedantic -std=c17 -Iinclude
LDFLAGS :=

# Source and object files
SRC := main.c $(wildcard src/*.c)
OBJ := $(patsubst %.c,$(OUTPUT_DIR)/%.o,$(SRC))
DEP := $(OBJ:.o=.d)

# Default target
.PHONY: all run clean

all: $(OUTPUT_DIR)/$(TARGET)

# Link object files
$(OUTPUT_DIR)/$(TARGET): $(OBJ)
	@mkdir -p $(dir $@)
	$(CC) $(LDFLAGS) -o $@ $^

# Compile source files
$(OUTPUT_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEP)

# Run executable
run: all
	./$(OUTPUT_DIR)/$(TARGET)

# Remove generated files
clean:
	rm -rf $(OUTPUT_DIR)
