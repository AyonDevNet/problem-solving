#include <stdio.h>
#include <stdbool.h>

int main()
{
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];

    // Input loop — standalone, closed before any checks
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    } // <-- input loop ends HERE

    if (r == c)
    {
        bool is_diagonal = true; // declared once, outside the check loops

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i != j && a[i][j] != 0)
                {
                    is_diagonal = false;
                    break; // no need to keep checking
                }
            }
            if (!is_diagonal)
                break; // exit outer loop early too
        }

        if (is_diagonal)
            printf("This is a diagonal matrix.\n");
        else
            printf("This is NOT a diagonal matrix.\n");
    }
    else
    {
        printf("Matrix is not square (r != c), cannot be diagonal.\n");
    }

    return 0;
}