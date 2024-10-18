/*write a program to make a rock ,paper and scissor game between user and computer .Log the scores of both and finally display the name
of the winner */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random(int n)
{
    srand(time(NULL));
    return rand() % 2;
}

void main()
{
    int player1pnts = 0, player2pnts = 0;

    int player1, player2;
    char name[20];
    printf("Enter player1 name:\n");
    gets(name);

    for (int i = 1; i <= 3; i++)
    {
        printf("Enter player 1:\n");
        printf("type 0 for rock,1 for  paper and 2 for scissors\n");
        scanf("%d", &player1);
        player2 = random(2);
        if (player2 == 0)
        {
            printf("player2 has chosen rock\n");
        }
        else if (player2 == 1)
        {
            printf(" player2 has chosen paper \n");
        }

        else
        {
            printf("player2 has chosen scissor\n");
        }

        if (((player1 == 0) && (player2 == 1)) || ((player1 == 1) && (player2 == 2)) || ((player1 == 2) && (player2 == 0)))
        {
            printf("player2 got 1 point \n");
            player2pnts++;
        }
        else if (((player1 == 1) && (player2 == 0)) || ((player1 == 2) && (player2 == 1)) || ((player1 == 0) && (player2 == 2)))
        {
            printf("player1 got 1 point \n");
            player1pnts++;
        }
        else
        {
            printf("No points\n");
        }
    }
    if (player1pnts > player2pnts)
    {
        printf(" %s is the winner ", name);
    }
    else if (player2pnts > player1pnts)
        printf("player2 is winner ,Game Over");

    else
        printf("match tie");
}
