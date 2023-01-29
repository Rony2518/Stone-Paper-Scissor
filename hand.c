#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int result();

void main()
{
    char ch;
    int res;
    do
    {
        res = result();
        if (res == 0)
        {
            printf("\nYou Draw");
        }
        else if (res == -1)
        {
            printf("\nYou Loss");
        }
        else
        {
            printf("\nYou Won");
        }
        printf("\nWant to play(Y/N):");
        ch = getche();
    } while (toupper(ch) != 'N');
}
int result()
{
    int comp, user, low = 1, high = 3;
    printf("\n1.Stone 2.Paper 3.Scissor:");
    scanf("%d", &user);
    comp = (rand() % (high - low + 1)) + low;
    printf("\nComp=%d", comp);
    printf("\nUser=%d", user);
    if (comp == user)
    {
        return 0;
    }
    else if ((comp == 1 && user == 3) || (comp == 2 && user == 1) || (comp == 3 && user == 2))
    {
        return -1;
    }
    else
    {
        return 1;
    }
}