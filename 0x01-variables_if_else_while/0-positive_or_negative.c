#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // Seed the random number generator

    int n = rand();  // Generate a random number

    printf("The number is: %d\n", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n < 0) {
        printf("is negative\n");
    } else {
        printf("is zero\n");
    }

    printf("\n");  // Print a new line

    return 0;
}

