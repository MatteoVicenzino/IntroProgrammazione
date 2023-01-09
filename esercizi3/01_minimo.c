#include <stdio.h>

// Funzione che dati tre numeri x, y, z ne calcola il minimo
// Poi prende x, y dei numeri dati e calcola il minimo di tutte le possibili triplette formate da x, y, w, t.c. w appartiene a [1, max(x, y)]

int minimo(int a, int b, int c)
{
    int min;
    if(a <= b)
    {
        min = a;
    }
    else
    {
        min = b;
    }

    if(min > c)
    {
        min = c;
    }
    
    return min;
}

void test(int x, int y)
{
    //calcolo il valore massimo tra x e y
    int max;
    if(x >= y)
        max = x;
    else
        max = y;
    
    for(int i = 1; i <= max; i++)
    {
        printf("tripletta (%d, %d, %d) - minimo -> %d\n", x, y, i, minimo(x, y, i));
    }
    return(0);
}

void main()
{
    int x;
    printf("Inserisci il numero (x): ");
    scanf("%d", &x);

    int y;
    printf("Inserisci il numero (y): ");
    scanf("%d", &y);

    test(x, y);
    
    return(0);
}