#include <stdio.h>

//Programma che stampa la successione di fibonacci fino n di elementi

void main()
{
    
    int n;
    printf("Inserire n: ");
    scanf("%d", &n);

 
    if(n >= 0)
    {
        printf("F(0) = 0\n");
    }
    if(n >= 1)
    {
        printf("F(1) = 1\n");
    }

    if (n >= 2)
    {
        int fzero = 0;
        int funo = 1;

        
        for(int i = 2; i <= n; i++)
        {
            int f = fzero + funo;
            printf("F(%d) = %d\n", i, f);
            fzero = funo;
            funo = f;
        }
    }

    return(0);
}