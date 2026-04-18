// Problem Statement

// You will be given a positive integer N and N numbers after that. You need to tell the sum of positive numbers and the sum of negative numbers separated by a space.

// Input Format

// First line will contain N.
// Second line will contain N values named V.
// Constraints

// 1 <= N <= 10^5
// -1000 <= V <= 1000
// Output Format

// Output the sum of positive numbers first, then sum of negative numbers.
// Sample Input 0

// 6
// 5 -3 9 -10 2 8 
// Sample Output 0

// 24 -13
// Sample Input 1

// 4
// 1 0 -5 3
// Sample Output 1

// 4 -5


#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x;
    int posSum = 0, negSum = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &x);

        if(x > 0)
        {
            posSum += x;
        }
        else if(x < 0)
        {
            negSum += x;
        }
    }

    printf("%d %d", posSum, negSum);

    return 0;
}