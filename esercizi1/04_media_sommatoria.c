#include <stdio.h>

/* Programma che stampa la media dei numeri dati numeri dat, il programma smette di ricevere input quando si inserisce il valore 0 */

void main()
{
    float n = 1;
    float s = 0;
    float d = 0;

  while (n != 0)
    {
        
        printf("Inserisci un numero: ");
        scanf("%f", n);
        s = s + n;
        d++;
            
    }

    printf("La media aritmetica è %f", s/d);
    return(0);

    //il programma restituisce il seguente errore: Segmentation fault (core dumped) . chiedere a lezione
    
}