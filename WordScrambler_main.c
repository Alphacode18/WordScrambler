#include "WordScrambler.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    parse_file("WordList.txt");
    render_image("image.txt");
    printf("\n\n\n");
    printf("Would you like us to scramble some words for you?: \n");
    printf("1. Yes\n2. No\n");
		render_choice();
    return 0;
}