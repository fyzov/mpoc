#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 10
#define STATISTIC_FILE "statistic.txt"

int main() {
    // FILE *file = fopen(STATISTIC_FILE, "r");

    int wins = 0;
    int losses = 0;
    int attempts = 0;
    int number, input;

    srand(time(NULL));

    while (1) {
        number = rand() % MAX + MIN;
        printf("Enter number: ");
        scanf("%d", &input);

        if (input == number) {
            printf("You win! Number of %d\n", number);
            wins++;
        } else {
            printf("You loss! Number of %d\n", number);
            losses++;
        }
        attempts++;
    }
}
