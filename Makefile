#The compiler of choice: gcc for C program
CC = gcc

#The compiler flags in use
# -Wall activates all warnings
# -Werror makes all warnings into errors
CFLAGS = -Wall -Werror

#The build target executable
TARGET = WordScrambler

file:
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(TARGET)_main.c

clean:
	$(RM) test.txt $(TARGET) $(TARGET)_main