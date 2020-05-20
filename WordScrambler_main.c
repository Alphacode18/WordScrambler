#include "WordScrambler.h"

int main() {
    parse_file("WordList.txt");
    render_image("image.txt");
    printf("\n\n\n");
    printf("Would you like us to scramble some words for you?: \n");
    printf("1. Yes\n2. No\n");
		render_choice();
    delay(500);
    printf("\n");
    printf("How many letters are present?\n");
    printf(">>>>");
    printf("\n");
    return 0;
}