/** @file WordScrambler.h
 * 
 * @brief The file defines constants and functions for . 
 *
 */ 

#ifndef WordScrambler.h
#define WordScrambler.h

int parse_file(char *);
int parse_test(char *)

/* Error Constants */

#define SUCCESS (0)
#define FILE_NOT_FOUND (-1)
#define FILE_WRITE_ERROR (-2)

/* Size Constants */

#define DICT_LEN (100000)
#define MAX_CHAR (1000)

/* Global Variables */

extern char g_dictionary[DICT_LEN][MAX_CHAR];
extern int status;

#endif