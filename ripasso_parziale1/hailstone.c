#include <stdio.h>

int sequenza(int n)
{
    int m; //prossimo numero della sequenza
    if(n % 2 == 0)
    {
        m = n / 2;
    }
    else
    {
        m = (n * 3) + 1;
    }
    return m;
}

int lunghezza(int n, int m)
{
    
    int count = 0;
    while(m != 1)
    {
        printf("il numero successivo è %d\n", m);
        n = m;
        m = sequenza(m);
        count++;
    }

    printf("%d\n", count);
    return count;
}


void main()
{
    int n;
    printf("Inserisci n: ");
    scanf("%d", &n);

    int m = sequenza(n);

    lunghezza(n, m);
}