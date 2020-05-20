#include "WordScrambler.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char g_dictionary[DICT_LEN][MAX_CHAR_LEN] = {};

/*
 * The parse_file function parses in the text file contain english
 * words into the g_dictionary global string array.
 * @param filename: The function takes in the string of the file name.
 * @return SUCCESS/FILE_NOT_FOUND: The function returns SUCCESS if
 * everything is executed perfectly. FILE_NOT_FOUND if the file does not
 * exist and NON_COMPATIBLE_FILE if the format of the file is wrong or if
 * has malformed data.
 */

int parse_file(char *filename) {
    assert(filename != NULL);
    FILE *file_pointer_in = fopen(filename, "r");
    if (file_pointer_in == NULL) {
        return FILE_NOT_FOUND;
    }
    int counter = 0;
    int status;
    do {
        status = fscanf(file_pointer_in, "%[^\n]\n", g_dictionary[counter]);
        if (status != 1) {
            return NON_COMPATIBLE_FILE;
        }
        counter += 1;
    } while (status == 1);
    fclose(file_pointer_in);
    file_pointer_in = NULL;
    return SUCCESS;
} /* parse_file() */

/*
 * The print_image function helps output ASCII graphics on the
 * command line. It uses the process_image helper function to 
 * display the image.
 * @param image_file: The function takes in a image_file string name.
 * @return SUCESS/FILE_NOT_FOUND: The function returns SUCCESS if image
 * is parsed and displayed successfully. And FILE_NOT_FOUND if wrong file
 * is inputted.
 */

int render_image(char *image_file) {
    assert(image_file != NULL);
    FILE *file_pointer_in = fopen(image_file, "r");
    if (file_pointer_in == NULL) {
        return FILE_NOT_FOUND;
    }
    process_image(file_pointer_in);
    fclose(file_pointer_in);
    file_pointer_in = NULL;
    return SUCCESS;
} /* render_image() */

/*
 * The process_image helper function takes in a file pointer
 * and processes the ASCII text into displayable text.
 * @param file_pointer_in: The function takes in a file pointer
 * as a parameter.
 * @return void: The function does not return anything.
 */

void process_image(FILE *file_pointer_in) {
    char ascii_buffer[MAX_BUFFER_LEN];
    while(fgets(ascii_buffer, sizeof(ascii_buffer), file_pointer_in) != NULL) {
      printf("%s", ascii_buffer);
    }
} /* process_image() */

/*
 *
 * 
 * 
 */

void render_choice() {
    printf("\n\n\n");
    printf("Would you like us to scramble some words for you?: \n");
    printf("1. Yes\n2. No\n");
    printf("Your Choice\n");
} /* render_choice() */

/*
 *
 * 
 * 
 */ 

int process_choice() {
} /* process_choice() */

/*
 * The parse_test function prints out the contents of g_dictionary array
 * to a test ouput file.
 * @instruction: diff [input_file name] [output_file name] to check for
 * any differences.
 * @param filename: The function takes in the string of the file name.
 * @return SUCCESS/FILE_NOT_FOUND: The function returns SUCCESS if
 * everything is executed perfectly. FILE_NOT_FOUND if the file does not
 * exist.
 */

int parse_test() {
    printf("Parsing File ...\n");
    int result = parse_file("WordList.txt");
    if (result == 0) {
        printf("File Parsed Successfully\n\n");
    }
    else {
        printf("File Not Parsed\n\n");
    }
    printf("Testing Parsed File ...\n");
    FILE *file_pointer_out = fopen("test.txt", "w");
    if (file_pointer_out == NULL) {
        return FILE_WRITE_ERROR;
    }
    int counter = 0;
    while (counter < DICT_LEN) {
        fprintf(file_pointer_out, "%s\n", g_dictionary[counter]);
        counter += 1;
    }
    fclose(file_pointer_out);
    file_pointer_out = NULL;
    printf("Test Passed\n\n");
    return SUCCESS;
} /* parse_test() */