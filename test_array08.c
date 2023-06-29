#include <stdio.h>

void main()
{
    int num[2][4];
    int x = 0, y = 0;

    while (x < 2)
    {
        y = 0;

        while (y < 4)
        {
            num[x][y] = (y+1+x+x+x+x) * 10;
            y = y + 1;
        }

        x = x + 1;
    }

    x = 0;
    while (x < 2)
    {
        y = 0;

        while (y < 4)
        {
            printf("%d ", num[x][y]);
            y = y + 1;
        }

        printf("\n");
        x = x + 1;
    }
}