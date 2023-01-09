#include <stdio.h>

//Programma che stampa la successione di fibonacci fino n di elementi

int fibo(int n)
{
    if(n==0)
        return(0);
    if(n==1)
        return(1);

    return(fibo(n-2)+fibo(n-1));
}

void main()
{
    
    int n;
    printf("Inserire n: ");
    scanf("%d", &n);

    printf("%d\n", fibo(n));
    

    return(0);
}