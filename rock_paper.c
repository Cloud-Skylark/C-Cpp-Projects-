#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Gaming funciton
int game(char you, char computer)
{
    // If both user and computer
    // have chosen the same option
    if (you == computer)
        return -1;

    // If user's choice is stone and
    // computer's choice is paper
    if (you == 's' && computer == 'p')
        return 0;

    // If user's choice is paper and
    // computer's choice is stone
    else if (you == 'p' && computer == 's')
        return 1;

    // If user's choice is stone and
    // computer's choice is scissor
    if (you == 's' && computer == 'z')
        return 1;

    // If user's choice is scissor and
    // computer's choice is stone
    else if (you == 'z' && computer == 's')
        return 0;

    // If user's choice is paper and
    // computer's choice is scissor
    if (you == 'p' && computer == 'z')
        return 0;

    // If user's choice is scissor and
    // computer's choice is paper
    else if (you == 'z' && computer == 'p')
        return 1;
}

int main()
{
    char you, computer;

    // To generate random choice for computer ==>
    srand(time(0));
    int randomNumber = rand() % 3 + 1;

    // Assigning random values to computer ==>
    if (randomNumber == 1)
        computer = 's';
    else if (randomNumber == 2)
        computer = 'p';
    else
        computer = 'z';

    // User's choice ==>
    printf("Enter 's' for Stone, 'p' for Paper, and 'z' for Scissor: ");
    scanf(" %c", &you);

    int result = game(you, computer);

    if (result == -1)
    {
        printf("It's a draw!\n");
    }
    else if (result == 0)
    {
        printf("You lose! Computer wins.\n");
    }
    else
    {
        printf("Congratulations! You win.\n");
    }

    printf("Computer's choice: %c\n", computer);

    printf("This game done by CLoudy (*_*)");

    return 0;
}