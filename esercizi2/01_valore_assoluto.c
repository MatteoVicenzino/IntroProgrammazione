#include <stdio.h>

// Programma che dice se un numero inserito dall'utente è positivo o negativo e ne calcola il valore assoluto

void main()
{
    float x;
    printf("Inserire x: ");
    scanf("%f", &x);

    if(x >= 0)
    {
        printf("%f è positivo", x);
        printf("\nValore assoluto: %f\n", x);
    }
    else
    {
        printf("%f è negativo", x);
        printf("\nValore assoluto: %f\n", -x);
    }

    return(0);
}