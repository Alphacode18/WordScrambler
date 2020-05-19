#The compiler of choice: gcc for C program
CC = gcc

#The compiler flags in use
# -Wall activates all warnings
# -Werror makes all warnings into errors
CFLAGS = -Wall -Werror -std=c99 -O

#The build target executable
TARGET = WordScrambler

file:
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c $(TARGET)_main.c

run:
	./$(TARGET)

clean:
	$(RM) test.txt $(TARGET) $(TARGET)_main

git:
	git add .
	git commit -m "$(m)"
	git push -u origin master