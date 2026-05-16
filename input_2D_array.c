#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int s[a][b];

    // Read into the array
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &s[i][j]);  
        }
    }

    // Print the array
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d ", s[i][j]);  
        }
        printf("\n");  
    }

    return 0;
}