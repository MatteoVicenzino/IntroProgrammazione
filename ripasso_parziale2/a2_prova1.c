#include<stdio.h>
#include<stdlib.h>

int s_n(int a[], int n)
{
    if(n == 2)
        return(a[0] + a[1]);
    return(s_n(a, n-1) * (a[n-1] + a[n-2]));
}

void main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    printf("%d \n", s_n(a, 6));
}