#include<stdio.h>
#include<string.h>

int is_palindrome(char strings[])
{
    int lenthStr = strlen(strings);

    for(int i = 0; i < lenthStr / 2; i++)
    {

        int start = i;

        int end = lenthStr - i - 1;

        if(strings[start] != strings[end])
        {

            return 0;
        }
    }

    return 1;
}

int main()
{

    char s[1000];

    scanf("%s", s);

    int result = is_palindrome(s);


    if(result == 1)
    {

        printf("Palindrome");

        
    }

    else
    {

        printf("Not Palindrome");
    }

    return 0;
}