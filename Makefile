# Define the compiler
CC = gcc

# Define the executable name
TARGET = modify_arg

# Define the source file
SRC = modify_arg.c

# Define the object file
OBJ = $(SRC:.c=.o)

# Default rule
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

# Rule to compile the source file into an object file
$(OBJ): $(SRC)
	$(CC) -c $(SRC)

# Rule to clean up generated files
clean:
	rm -f $(OBJ) $(TARGET)

# Rule to run the program with a sample argument
run: $(TARGET)
	./$(TARGET) hello

.PHONY: all clean run