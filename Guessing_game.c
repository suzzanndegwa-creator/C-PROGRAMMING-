/*
Name:Susan Ndegwa
Reg No:CT101/G/26435/25
Description:Guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_Number, guess, attempts = 0;

    srand(time(0));

    // Give a random number between 1 and 20
        secret_Number=rand()%20+1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess a number between 1 and 20):\n");

    while (1) {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess>secret_Number) {
            printf("Too high!\n");
        } else if (guess<secret_Number) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed the correct number.\n");
            printf("Took %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}
