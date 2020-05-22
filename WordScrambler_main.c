#include "WordScrambler.h"

int main() {
    parse_file("WordList.txt");
    render_image("image.txt");
    printf("\n\n\n");
    printf("Would you like us to scramble some words for you?: \n");
    printf("1. Yes\n2. No\n");
		int choice = process_choice();
    while ((choice == INVALID_INPUT) || (choice == OUT_OF_BOUNDS)) {
      clear_buffer();
      choice = process_choice();
    }
    if (choice == EXIT) {
      printf("Exiting program ...\n");
      delay(1000);
      printf("Exited Program Successfully.\n");
      return 0;
    }
    else {
      delay(500);
    }
    printf("\n");
    printf("How many letters are present?\n");
    printf("\n");
    return 0;
}