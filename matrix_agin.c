// Matrix Again
// Problem
// Submissions
// Leaderboard
// Discussions
// Problem Statement

// You will be given a 2D matrix of N * M size. The matrix will contain integer values only. You need to print the values of last row and then print the values of last column in the order they were given.

// Input Format

// First line will contain N and M the row and column respectively.
// Then the 2D matrix will be given.
// Constraints

// 2 <= N,M <= 100
// 0 <= Element <= 100
// Output Format

// First line will contain the values of last row.
// Second line will contain the values of last column.
// Sample Input 0

// 3 4
// 1 2 3 4
// 5 6 7 8
// 6 5 4 2
// Sample Output 0

// 6 5 4 2 
// 4 8 2 
// Sample Input 1

// 5 3
// 1 2 3 
// 5 6 7 
// 6 5 4
// 3 5 4
// 1 2 3
// Sample Output 1

// 1 2 3 
// 3 7 4 4 3 
// Submissions: 287
// Max Score: 20
// Difficulty: Easy
// Rate This Challenge:

    

#include <stdio.h>

int main()
{
    int N, M;

    scanf("%d %d", &N, &M);

    int a[100][100];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int j = 0; j < M; j++)
    {

        printf("%d ", a[N-1][j]);
    }

    printf("\n");

     for (int i = 0; i < N; i++)
    {

        printf("%d ", a[i][M-1]);

    }
    
    printf("\n");

    return 0;
}