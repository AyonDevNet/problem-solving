#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int tc = 0; tc < t; tc++)
    {
        int n;
        scanf("%d", &n);

        int A[1000], B[1000], C[1000];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }

        for (int i = 0; i < n; i++)
        {
            B[i] = A[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                if (B[j] > B[j + 1])
                {
                    int temp = B[j];
                    B[j]     = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }

        // calculate C
        for (int i = 0; i < n; i++)
        {
            int diff = A[i] - B[i];

            if (diff < 0)
                diff = -diff;  // absolute value

            C[i] = diff;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}