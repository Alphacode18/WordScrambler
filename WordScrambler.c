#include "WordScrambler.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char *g_dictionary = NULL;

int main() {

}

int parse_file(char *filename) {
    assert(filename != NULL);
    FILE *file_pointer_in = fopen(filename, "r");
    if (file_pointer_in == NULL) {
        return FILE_NOT_FOUND;
    }
}