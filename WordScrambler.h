/** @file WordScrambler.h
 * 
 * @brief The file defines constants and functions for . 
 *
 */ 

#include <stdio.h>

int parse_file(char *);
int parse_test();
int render_image(char *);
void process_image(FILE *file_pointer_in);
void render_choice();
int process_choice();
void clear_buffer();

/* Error Constants */

#define SUCCESS (0)
#define FILE_NOT_FOUND (-1)
#define NON_COMPATIBLE_FILE (-2)
#define FILE_WRITE_ERROR (-3)
#define INVALID_INPUT (-4)
#define EXIT (-5)

/* Size Constants */

#define DICT_LEN (10000)
#define MAX_CHAR_LEN (1000)
#define MAX_BUFFER_LEN (128)

/* Global Variables */

extern char g_dictionary[DICT_LEN][MAX_CHAR_LEN];
extern int status;
extern int choice;