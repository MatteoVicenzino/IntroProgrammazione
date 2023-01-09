#include <stdio.h>

float a_n(int n)
{
    float a_0 = 1;
    float a_1 = 2;
    float a_n;
    
    if(n % 2 == 0)
    {
        for(int i = 3; i < n; i++)
        {
            float a_n = (n + 3 (a_ -2 )) / ();
        }
    }
    else
    {
        for(int i = ; i<n; i++)
        {
            float a_n = (n + 3 (a_ -2 )) / ();
        }
    }
    
}

void main()
{
    int n;
    printf("Valore di n: ");
    scanf("%d", &n);
    printf("Risultato a_n: %d\n", a_n(n));
}