#include <stdio.h>

int main()
{
    int n=5, i, j;
    int b;  


    for (i = 1; i <= n; i++)
    {
        b = 0;  

        
        for (j = 1; j <= i; j++)
        {
            printf("%d", b);
            b = 1 - b;  
        }

        printf(" ");  
        
        b = 0;  
        for (j = 1; j <= i; j++)
        {
            printf("%d", b);
            b = 1 - b;
        }

        printf("\n");  
    }

    return 0;
}
