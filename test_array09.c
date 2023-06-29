#include <stdio.h>

void main()
{
    int num[2][4];
    int x = 0, y = 0;

    do
    {
        y = 0;

        do
        {
            num[x][y] = (y+1+x+x+x+x) * 10;
            y++;
        }
        while (y < 4);

        x++;
    }
    while (x < 2);

    x = 0;

    do
    {
        y = 0;

        do
        {
            printf("%d ", num[x][y]);
            y++;
        }
        while (y < 4);

        printf("\n");
        x++;
    }
    while (x < 2);
}