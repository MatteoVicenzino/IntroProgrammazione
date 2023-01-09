#include <stdio.h>

void main()
{
  int n;
  printf("inserisci un numero intero da tastiera: ");
  scanf("%d", &n); 
  
  // %d converte il valore inserito in int
  // %f converte il valore inserito in float
  // &n assegna il valore convertito alla variabile n

  printf("il valore inserito è %d \n", n);

  // nel comando precedente il compilatore prende il valore di n e lo mette al posto di %d. L'accapo quindi lo mette dopo il valore di n
  
}