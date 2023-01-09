#include <stdio.h>
#include <math.h>

// Funzione che dati due valori double inseriti dall'utente, restituisce 1 se i due numeri sono ugualil a differenza di un fattore, 0 in caso contrario


double calcolo(double e, double x, double y)
{
    int tf;
    double c = x - y;
    if(c < 0)
    {
        c = - c;
    }
    
    if(c < e)
    {
        tf = 1;
    }
    else
    {
        tf = 0;
    }

    return tf;
}


void main()
{
    double e;
    printf("Inserire epsilon (e): ");
    scanf("%lf", &e);
    double x;
    printf("Inserire x: ");
    scanf("%lf", &x);
    double y;
    printf("Inserire y: ");
    scanf("%lf", &y);


    int disug = calcolo(e, x, y);

    if(disug == 1)
    {
        printf("I due numeri sono uguali con epsilon %lf\n", e);
    }
    else
    {
        printf("I due numeri sono diversi con epsilon %lf\n", e);
    }
    
    return(0);
}