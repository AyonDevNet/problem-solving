// 


#include<stdio.h>
#include<string.h>

int main()
{
    char sm[1000001];
    scanf("%s", sm);

    int length = strlen(sm);
    int sum = 0;

    for(int i = 0; i < length; i++)
    {
        sum += sm[i] -'0';
    }

    printf("%d", sum);

    return 0;
}