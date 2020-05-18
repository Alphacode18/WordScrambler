#include "WordScrambler.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char g_dictionary[DICT_LEN] = {};
int status;

int main() {

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