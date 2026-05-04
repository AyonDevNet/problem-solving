#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;

    // 🔼 Upper pyramid
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= star; k++)
        {
            printf("*");
        }

        printf("\n");

        star += 2;
        space--;
    }

    // 🔽 Reverse pyramid
    star -= 4;     // adjust (important)
    space = 1;

    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for(int k = 1; k <= star; k++)
        {
            printf("*");
        }

        printf("\n");

        star -= 2;
        space++;
    }

    return 0;
}