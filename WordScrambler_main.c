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
    printf("\n");
    printf("How many letters are present?\n");
    clear_buffer();
    int num_letters = process_num_letters();
    while (num_letters == INVALID_INPUT) {
      clear_buffer();
      num_letters = process_num_letters();
    }
    printf("\n");
    char *letter_array = malloc(num_letters * sizeof(char));
    for (int i = 0; i < num_letters; i++) {
      clear_buffer();
      printf("Enter your letter: ");
      letter_array[i] = process_letter();
    }  
    free(letter_array);
    letter_array = NULL;
    return 0;
}