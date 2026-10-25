#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

// Function to implement the game
int game(char you, char comp)
{
    if (you == comp)
    {
        return -1;
    }
    // Stone and paper condition
    if (you == 's' && comp == 'p')
    {
        return 0;
    }
    else if (you == 'p' && comp == 's')
    {
        return 1;
    }

    // Stone and scissor condition
    if (you == 'z' && comp == 's')
    {
        return 0;
    }

    else if (you == 's' && comp == 'z')
    {
        return 1;
    }

    // Scissor and stone

    if (you == 'p' && comp == 'z')
    {
        return 0;
    }
    else if (you == 'z' && comp == 'p')
    {
        return 1;
    }
}

// Game Driver Code

int main()
{
    // Stores the random number
    int n;
    char you, comp, result;

    // Choose the random number every time
    srand(time(NULL));

    // Make the random number less then 100, divided it by 100
    n = rand() % 100;

    // Using simple probablity 100 is roughly is divided among stone
    if (n < 33)
        comp = 's';

    else if (n > 33 && n < 66)
        comp = 'p';

    else
        comp = 'z';

    printf("\n\n\n\n\t\t\t\tEnter s for STONE, p for PAPER and z for SCISSOR\n\t\t\t\t\t\t\t");

    // Input form the user
    scanf("%c", &you);

    // Function call to play the game
    result = game(you, comp);

    if (result == -1)
    {
        printf("\n\n\t\t\t\tGame Draw!\n");
    }

    else if (result == 1)
    {

        printf("\n\n\t\t\t\tWow! You have won the Gamme.\n");
    }

    else
    {
        printf("\n\n\t\t\t\tOh! You have lost the Gamme.\n");
    }

    printf("\t\t\t\tYou choose : %c and Computer choose : %c\n", you, comp);
    return 0;
}