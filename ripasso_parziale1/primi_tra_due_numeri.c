#include <stdio.h>

int primo(int n, int i)
{
    
    if(n % i == 0 && i != 1)
        return(0);
    if(i==1)
        return(1);
    return(primo(n, i-1));
    
}

int myfunction(int x, int y)
{
    int count = 0;
    for(int i = x; i < y; i++)
    {
        if((primo(i,i-1)) == 1)
            count++;    
    }
    return count;
}

void main()
{
    int x;
    printf("Inserisci x: ");
    scanf("%d", &x);
    int y;
    printf("Inserisci y: ");
    scanf("%d", &y);

    printf("%d\n", myfunction(x ,y));

    
}