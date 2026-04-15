#include<stdio.h>

int main()
{
   int N;
   scanf("%d", &N);
   
    for(int i=1; i<=N; i++)
    {
        if(i%2 == 0)
        {
            printf("%d this is even numbers\n", i);
        }
        else
        {
            printf("%d this odd numbers\n", i);
        }

    }

        return 0;




}