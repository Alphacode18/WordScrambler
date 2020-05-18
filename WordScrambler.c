#include "WordScrambler.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char g_dictionary[DICT_LEN][MAX_CHAR] = {};
int status;

int main() {
    printf("Parsing File ...");
    int result = parse_file("WordList.txt");
    if (result == 0) {
        printf("File Parsed Successfully");
    }
    else {
        printf("File Not Parsed");
    }
    printf("Testing Parsed File ...");
    result = parse_test();
    if (result == 0) {
        printf("Test Passed");
    }
    else {
        printf("Test Failed");
    }
    return 0;
}

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

int parse_test() {
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
    return SUCCESS;
}