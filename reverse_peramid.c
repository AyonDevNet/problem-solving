#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int star = 2*n - 1;  // maximum stars in first row
    int space = 0;       // no space in first row

    for(int i = 1; i <= n; i++)
    {
        // print spaces
        for(int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        // print stars
        for(int k = 1; k <= star; k++)
        {
            printf("*");
        }

        printf("\n");

        star -= 2;   // decrease stars
        space++;     // increase space
    }

    return 0;
}