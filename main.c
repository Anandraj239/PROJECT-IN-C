//_____________________Guessing The Number______________________

/*. We will write a program that generates a random number and ask the player to guess it.
    if the player's guess is higher then the actual number , the program displays"Lower number please".
    similarly, if the user's guess is too low, the program prints "Higher number please".

    When the user gusses the correct number, the program displays the number of guesses the player 
    used to arrive at the number.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Initialize the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the number: ");
        scanf("%d",&guessed_number);

        if (guessed_number>randomNumber)
        {
            printf("Lower number please\n");
        }
        else if (guessed_number<randomNumber)
        {
            printf("Higher number please\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++; 
    } while (guessed_number != randomNumber);
    printf("You have guessed the number in %d guesses", no_of_guesses);



    return 0;
}

