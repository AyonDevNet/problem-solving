// M. Replace MinMax
// time limit per test1 second
// memory limit per test256 megabytes
// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

// It's guaranteed that all numbers are distinct.

// Output
// Print the array after the replacement operation.

// Example
// InputCopy
// 5
// 4 1 3 10 8
// OutputCopy
// 4 10 3 1 8 



#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    // input
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // initialize
    int min = INT_MAX;
    int max = INT_MIN;
    int min_idx = -1;
    int max_idx = -1;

    for(int i = 0; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            min_idx = i;
        }

        if(a[i] > max)
        {
            max = a[i];
            max_idx = i;
        }
    }

    a[min_idx] = max;
    a[max_idx] = min;

    // output
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}