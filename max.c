// E. Max
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N, and N numbers, find maximum number in these N numbers.

// Input
// First line contains a number N (1 ≤ N ≤ 103).

// Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

// Output
// Print the maximum number.

// Example
// InputCopy
// 5
// 1 8 5 7 5
// OutputCopy
// 8

    #include <stdio.h>

    int main()
    {

        int n;
        scanf("%d", &n);

        int max = 0;

        for (int i = 1; i <= n; i++)
        {
            int x;
            scanf("%d", &x);
            if (x > max)
            {
                max = x;
            }
            // printf("%d", max);
        }
        printf("%d", max);

        return 0;
    }