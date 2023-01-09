#include <stdio.h>
#include <stdlib.h>

int max(int a[], int n)
{
    int max = a[0]; //suppongo che il max sia il primo
    for(int i = 1; i < n; i++){ // per i che va da 1 a n se ne trovo uno maggiore, quello sarà il max
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int* couning_sort(int a[], int n, int k)
{
    int* c = malloc(sizeof(int)* k + 1); //creo un array di dimensione k (da 0 a k-1)
    //ho scelto di allocare k per considerare anche il caso in cui l'utente inserisca 0
    for(int j = 0; j < k+1; j++){ 
        c[j]=0; //lo inizializzo a zero per poi usare per comodità ++ 
    }
    
    for(int i = 0; i < n; i++) { //aggiungo 1 in posizione a[i] dell'array c
        c[a[i]]++;
    }

    
    // i: contatore dell'array da ordinare
    for(int i = 0; i < n; i++){ //per ogni elemento dell'array a da ordinare
        for(int j=0; j < k+1; j++){ //scorro l'array c
            if(c[j] > 0){ //se trovo un val>0 ...
                a[i] = j; //copio il valore
                c[j]--; //segno che ho il un valore corrispondente
                break; //esco dal ciclo for per ricominciare dall'inizio stringa
            }
        }
    }
    free(c);
    return a;
}

void main()
{
    int a[6];
    a[0] = 4;
    a[1] = 6;
    a[2] = 9;
    a[3] = 1;
    a[4] = 4;
    a[5] = 10;

    for(int i=0; i<6; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    int k = max(a, 6); //trovo il massimo valore dell'array e lo salvo in k
    int* risp = couning_sort(a, 6, k);

    //stampo il'array ordinato
    for(int p = 0; p < 6; p++){
        printf("%d ", risp[p]);
    }
    printf("\n");
}