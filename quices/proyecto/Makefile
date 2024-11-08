# Kevin Hernandez Umana C33773

# Variables generales
CC = gcc
CFLAGS = -Wall -Wextra
INCLUDE = ./include
SRC = ./src
OBJ = $(SRC)/task.o $(SRC)/todo_list.o
EXE = myprogram
LIB = libmylibrary.a
TEST_OBJ = test/main.o

# Targets

all: $(OBJ) $(TEST_OBJ)
	$(CC) $(OBJ) $(TEST_OBJ) $(CFLAGS) -o $(EXE)

test: $(OBJ) $(TEST_OBJ)
	$(CC) $(OBJ) $(TEST_OBJ) $(CFLAGS) -o test_program


lib: $(OBJ)
	ar rcs $(LIB) $(OBJ)

clean:
	rm -f $(SRC)/*.o test/*.o $(EXE) $(LIB) test_program

$(SRC)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@


test/main.o: test/main.c
	$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@