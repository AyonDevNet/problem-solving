// D. Print Digits using Recursion
// time limit per test
// 1 second
// memory limit per test
// 256 megabytes
// Given a number N. Print the digits of N separated by a space.
// Note: Solve this problem using recursion.
// Input
// First line contains a number T (1 ≤ T ≤ 10) number of test cases.
// Next T lines will contain a number N (0 ≤ N ≤ 109).
// Output
// For each test case print a single line contains the digits of the number separated by space.
// Example
// Input
// Copy

// ```
// 3
// 121
// 39
// 123456
// ```

// Output
// Copy

// ```
// 1 2 1 
// 3 9 
// 1 2 3 4 5 6 
// ```

#include <stdio.h>
#include <string.h>

int main() {
    int t, n;
    char s[12];
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n);
        sprintf(s, "%d", n);
        for (int i = 0; i < strlen(s); i++) {
            printf("%c ", s[i]);
        }
        printf("\n");
    }
    return 0;
}