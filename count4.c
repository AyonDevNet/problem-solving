    
    
    #include <stdio.h>

    int main()
    {
        char n[10001];
        scanf("%s", n);

        int count[26] = {0};   

        for (int i = 0; n[i] != '\0'; i++)
        {
            int indexof = n[i] - 'a';   
            count[indexof]++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (count[i] > 0)
            {
                printf("%c - %d\n", i + 'a', count[i]);
            }
        }

        return 0;
    }