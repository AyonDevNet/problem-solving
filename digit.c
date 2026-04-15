// Q. Digits
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N. Print the digits of that number from right to left separated by space.

// Input
// First line contains a number T (1 ≤ T ≤ 10) number of test cases.

// Next T lines will contain a number N (0 ≤ N ≤ 109)

// Output
// For each test case print a single line contains the digits of the number separated by space.

// Example
// InputCopy
// 4
// 121
// 39
// 123456
// 1200
// OutputCopy
// 1 2 1
// 9 3
// 6 5 4 3 2 1
// 0 0 2 1

#include<stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int n;
        scanf("%d", &n);

        // Special case for 0
        if (n == 0)
        {
            printf("0\n");
            continue;
        }

        while (n > 0)
        {
            int digit = n % 10;
            printf("%d ", digit);
            n = n / 10;
        }

        printf("\n");
    }

    return 0;
}