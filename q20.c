#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter choices of two players (1-Rock, 2-Paper, 3-Scissors): ");
    scanf("%d %d", &a, &b);

    if (a < 1 || a > 3 || b < 1 || b > 3)
    {
        printf("Invalid Input");
    }
    else if (a == b)
    {
        printf("Draw");
    }
    else
    {
        switch (a)
        {
            case 1:
                if (b == 3)
                    printf("Player 1 Wins");
                else
                    printf("Player 2 Wins");
                break;

            case 2:
                if (b == 1)
                    printf("Player 1 Wins");
                else
                    printf("Player 2 Wins");
                break;

            case 3:
                if (b == 2)
                    printf("Player 1 Wins");
                else
                    printf("Player 2 Wins");
                break;
        }
    }

    return 0;
}