/** @file WordScrambler.h
 * 
 * @brief The file defines constants and functions for . 
 *
 */ 

#include <stdio.h>

int parse_file(char *);
int parse_test();
int print_image(char *);
void process_image(FILE *file_pointer_in);

/* Error Constants */

#define SUCCESS (0)
#define FILE_NOT_FOUND (-1)
#define FILE_WRITE_ERROR (-2)

/* Size Constants */

#define DICT_LEN (10000)
#define MAX_CHAR (1000)
#define MAX_BUFFER (128)

/* Global Variables */

extern char g_dictionary[DICT_LEN][MAX_CHAR];
extern int status;