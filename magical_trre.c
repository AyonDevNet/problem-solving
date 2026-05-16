#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // print tree top (always 7 rows)
    for (int i = 1; i <= 7; i++)
    {
        for (int s = 0; s < 7 - i; s++)
        {
            printf(" ");
        }

        for (int s = 0; s < 2 * i - 1; s++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        for (int s = 0; s < 5; s++)
        {
            printf(" ");
        }

        for (int s = 0; s < N; s++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}