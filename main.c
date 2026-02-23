#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main()
{
    int randomNumber, guessed_number, no_of_guesses = 0;
    int input_status;

    // Display game title
    printf("=====================================\n");
    printf("   Welcome to the Number Guessing Game (1-100)\n");
    printf("=====================================\n");

    // Seed the random number generator (for different result every run)
    srand(time(0));

    // Generate random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    // Game loop
    do
    {
        printf("\nEnter your guess (between 1 and 100): ");

        // Input validation (prevents crash if user enters text)
        input_status = scanf("%d", &guessed_number);

        if (input_status != 1)
        {
            // Clear invalid input from buffer
            while (getchar() != '\n');
            printf("Invalid input! Please enter a valid number.\n");
            continue;
        }

        // Range validation
        if (guessed_number < 1 || guessed_number > 100)
        {
            printf("Please enter a number between 1 and 100 only.\n");
            continue;
        }

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
            printf("\nCongratulations! You guessed the number %d correctly!\n", randomNumber);
        }

    } while (guessed_number != randomNumber);

    printf("You guessed the number in %d attempts.\n", no_of_guesses);

    return 0;
}
