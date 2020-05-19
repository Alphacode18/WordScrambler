#include "WordScrambler.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main() {
    print_image("image.txt");
    printf("\n\n\n");
    printf("Would you like us to scramble some words for you?: \n");
    printf("1. Yes\n2. No\n");
    int choice;
    scanf("%d", &choice);
    if (choice == 2) {
        printf("Exiting Program...\nProgram Successfully Exited\n");
        return 0;
    }
    return 0;
}