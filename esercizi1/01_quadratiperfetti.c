#include <stdio.h>

/* Programma che stampa i quadrati perfetti dei numeri naturali compresi tra zero e un n dato */

void main()
{
    int n;
    printf("inserisci inserire il valore di n: ");
    scanf("%d", &n); 
    printf("Quadrati perfetti fino a %d: \n \n", n);

  //dato che mi serve fare un solo calcolo con i, non occorre che inizializzo una nuova variabile, basta mettere i*i nel printf 

    for (int i = 1; i <= n; i++)
    {
        printf("Il quadrato di %d è %d \n", i, i*i);
    }

    printf("\n");


    
// ora facciamo la stessa roba con il coclo while
/*
  int p = 1;
  while (n>0)
    {
      printf("Il quadrato di %d è %d \n", n, n*n);
      n = n - 1;
    }

*/

  
}