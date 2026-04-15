// Problem: Maximum and Minimum
// 📌 Problem Statement

// You are given an integer N, followed by N integers. Your task is to find the maximum and minimum numbers among them.

// 📥 Input
// The first line contains an integer N (1 ≤ N ≤ 10³).
// The second line contains N integers separated by spaces.
// 📤 Output

// Print two lines:

// First line prints: max = X where X is the maximum number.
// Second line prints: min = Y where Y is the minimum number.
// 🧪 Example
// Input
// 5
// 1 2 3 4 5
// Output
// max = 5
// min = 1
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x;
    scanf("%d", &x);

    int max = x, min = x;

    for (int i = 2; i <= n; i++)
    {
        scanf("%d", &x);

        if (x > max)
        {
            max = x;
        }

        if (x < min)
        {
            min = x;
        }
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);

    return 0;
}