#include<stdio.h>

int main()
{
    int n;
    scanf("%d",  &n);
    int star =1;
    int space = n-1;
    
    // for line print
    for(int i =1 ; i<=n; i++){
      
        // for the space

        for(int j = 1; j<=space; j++)
        {
            printf(" ");
        }
     
        // for * print 

        for (int k =1; k<=star; k++)
        {
            printf("*");
        }
         printf("\n");
         star +=2;
         space --;
    }

    return 0;



    } 


