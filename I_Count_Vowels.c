// I. Count Vowels time limit per test1 second memory limit per test256 megabytes Given a string S.
//  Print number of vowels in the string. Note: Vowel letters: ['a', 'e', 'i', 'o', 'u']. 
//  Vowel letters could be capital or small. Solve this problem using recursion. 
//  Input Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string 
//  and it consists only of capital ,small letters and spaces. 
//  Output Print number of vowels in string S.
//  Example InputCopy Data Structure Lab OutputCopy 6


#include<stdio.h>

int rec(char s[], int i)
{
    if(s[i] == '\0')
    {
        return 0;
    }

    char c = s[i];

    if(c >= 'A' && c <= 'Z')
    {
        c = c + 32;
    }

    int cnt = 0;

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        cnt = 1;
    }

    return cnt + rec(s, i + 1);
}

int main()
{
    char s[201];
    fgets(s, 201, stdin);

    int ans = rec(s, 0);

    printf("%d", ans);

    return 0;
}