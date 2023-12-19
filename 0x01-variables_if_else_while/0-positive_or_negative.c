#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;

    // Seed for the random number generator
    srand(time(NULL));

    // Generate a random number between INT_MIN and INT_MAX
    n = rand();

    printf("The number %d ", n);

    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }

    return 0;
}

