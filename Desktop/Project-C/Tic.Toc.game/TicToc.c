#include <stdio.h>

int Squers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
int N;
char marks;
int player = 1;
int checkWin;
int main()
{
    if (player == 1)
    {
        marks == 'O';
    }
    else
    {
        marks == 'X';
    }

    printf("\n %d | %d | %d", Squers[1], Squers[2], Squers[3]);
    printf("\n ----------");
    printf("\n %d | %d | %d", Squers[4], Squers[5], Squers[6]);
    printf("\n ----------");
    printf("\n %d | %d | %d", Squers[7], Squers[8], Squers[9]);
    printf("please enter number : %d", N);
}
void marksthesquer()
{
    for (int i = 1; i < 9; i++)
    {
        Squers[i] == marks;
    }
}
