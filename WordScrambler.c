#include "WordScrambler.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char g_dictionary[DICT_LEN][MAX_CHAR] = {};
int status;

int parse_file(char *filename) {
    assert(filename != NULL);
    FILE *file_pointer_in = fopen(filename, "r");
    if (file_pointer_in == NULL) {
        return FILE_NOT_FOUND;
    }
    int counter = 0;
    do {
        status = fscanf(file_pointer_in, "%[^\n]\n", g_dictionary[counter]);
        counter += 1;
    } while (status == 1);
    fclose(file_pointer_in);
    file_pointer_in = NULL;
    return SUCCESS;
}

int print_image(char *image_file) {
    assert(image_file != NULL);
    FILE *file_pointer_in = fopen(image_file, "r");
    if (file_pointer_in == NULL) {
        return FILE_NOT_FOUND;
    }
    process_image(file_pointer_in);
    fclose(file_pointer_in);
    file_pointer_in = NULL;
    return SUCCESS;
}

void process_image(FILE *file_pointer_in) {
    char read_string[MAX_BUFFER];
    while(fgets(read_string, sizeof(read_string), file_pointer_in) != NULL) {
      printf("%s",read_string);
    }
}

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
}