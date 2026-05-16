#include <stdio.h>

int main()
{
    int r, c;

    // Read dimensions FIRST before declaring the array
    scanf("%d %d", &r, &c);

    int a[r][c]; // VLA — valid in C99/C11, now r and c are initialized

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]); // Removed trailing space — not needed here
        }
    }

    int total = r * c;
    int zero_count = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                zero_count++;
            }
        }
    }

    if (total == zero_count)
    {
        printf("This is a zero matrix\n");
    }
    else
    {
        printf("This is not a zero matrix\n");
    }

    return 0;
}