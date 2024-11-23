CC = gcc
CFLAGS = -Wall -g
OBJ = main.o temp_functions.o

temp_statistics: $(OBJ)
	$(CC) $(OBJ) -o temp_statistics


main.o: main.c temp_functions.h
	$(CC) $(CFLAGS) -c main.c


temp_functions.o: temp_functions.c temp_functions.h
	$(CC) $(CFLAGS) -c temp_functions.c

# Очистка
clean:
	rm -f *.o temp_statistics
