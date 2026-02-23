#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{

    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    // printf("Random number: %d\n", randomNumber);

    do
    {
        printf("Enter your guess (between 1 and 100): ");
        scanf("%d", &guessed_number);
        no_of_guesses++;

        if (guessed_number > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congratulations! You guessed the number %d correctly!\n", randomNumber);
        }
    } while (guessed_number != randomNumber);

    printf("you guessed the number in %d guesses", no_of_guesses);

    return 0;
}