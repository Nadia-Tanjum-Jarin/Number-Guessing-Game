#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function that generate a number in
// the range [1, N] and checks if the
// generated number is the same as the
// guessed number or not
void guess(int N)
{
    int num, guess, numberofguess = 0;

    //Seed random number generator
    srand(time(NULL));

    // Generate a random number
    num = rand() % N;

    printf("Guess a number between"
           " 1 and %d\n",
           N);


    do {

        if (numberofguess > 9) {
            printf("\nYou Loose!\n");
            break;
        }

        // Input by user
        scanf("%d", &guess);

        // When user guesses lower
        // than actual number
        if (guess > num)

        {
            printf("Lower number "
                   "please!\n");
            numberofguess++;
        }

        // When user guesses higher
        // than actual number
        else if (num > guess)

        {
            printf("Higher number"
                   " please!\n");
            numberofguess++;
        }

        // Printing number of times
        // user has taken to guess
        // the number
        else
            printf("You guessed the"
                   " number in %d "
                   "attempts!\n",
                   numberofguess);

    } while (guess != num);
}

// Driver Code
int main()
{
    int N = 100;

    // Function call
    guess(N);

    return 0;
}
