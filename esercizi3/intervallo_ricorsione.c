#include <stdio.h>
#include <math.h>

// Funzione che dati due numeri a e b con a<b stampa tutti i valori dell'intervallo ab ordinatamente

//CON UNA PROCEDURA RIUCORSIVA


void f(int a, int b)
{
    if(a==b) //caso base
    {
        printf("%d\n", a);
    }
    else
    {
        printf("%d\n", a);
        f(a+1, b);
    }


    //se non metti else e metti questo codice: 
    /*
    printf("%d\n", a);
    f(a+1, b);
    */
    //il programma entra in un loop e va avanti all'infinito
}




void main()
{
    int a;
    printf("Inserire a: ");
    scanf("%d", &a);
    int b;
    printf("Inserire b: ");
    scanf("%d", &b);

    f(a, b);


    
    return(0);
}

