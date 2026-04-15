// find the minimum numbers

#include<stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d", &n);

    int min = INT_MAX;

    for(int i = 1; i <= n; i++)
    {
        int x;
        scanf("%d", &x);

        if (x < min)
        {
            min = x;
        }
    }

    printf("%d", min);

    return 0;
}