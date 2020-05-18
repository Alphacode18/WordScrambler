/** @file WordScrambler.h
 * 
 * @brief The file defines constants and functions for . 
 *
 * @par       
 * COPYRIGHT NOTICE: (c) 2018 Barr Group.  All rights reserved.
 */ 

#ifndef WordScrambler.h
#define WordScrambler.h

int parse_file(char *);

/* Error Constants */

#define FILE_NOT_FOUND (-1)

/* Global Variables */

extern char *g_dictionary;
extern int status;

#endif