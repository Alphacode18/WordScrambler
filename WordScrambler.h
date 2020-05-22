/** @file WordScrambler.h
 * 
 * @brief The file defines constants and functions for . 
 *
 */ 

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int parse_file(char *);
int parse_test();
int render_image(char *);
void process_image(FILE *file_pointer_in);
int process_choice();
void process_num_letters();
char *process_input();
void clear_buffer();
void delay(int);

/* Error Constants */

#define SUCCESS (0)
#define FILE_NOT_FOUND (-1)
#define NON_COMPATIBLE_FILE (-2)
#define FILE_WRITE_ERROR (-3)
#define INVALID_INPUT (-4)
#define EXIT (-5)
#define OUT_OF_BOUNDS (-6)

/* Size Constants */

#define DICT_LEN (10000)
#define MAX_CHAR_LEN (1000)
#define MAX_BUFFER_LEN (128)

/* Global Variables */

extern char g_dictionary[DICT_LEN][MAX_CHAR_LEN];
extern int status;
extern int choice;
extern int num_letters;
extern char *letter_array;