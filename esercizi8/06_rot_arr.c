#include <stdio.h>
#include <stdlib.h>

//funzione che dato un array lo ruota di k posizioni a destra o sinistra

int* ruot(int a[], int n, int k)
{
    
    if(k >= 0){ // mi sposto a destra
        
        for(int count = 0; count < k; count++){
            int appoggio = a[n-1]; //salvo il valore da mettere per primo in una variabile d'appoggio
            //Scalo tutti i valori da quello prima dell'ultimo fino al primo
                for(int i = n-2; i >= 0; i--){
                    a[i+1] = a[i];
                }
                a[0]= appoggio; //salvo l'ultimo numero per primo
        }
        
    }
    else { // mi sposto a sinistra 
        k = -k;
        printf("%d \n", k);
        for(int count = 0; count < k; count++){
            int appoggio = a[0]; //salvo il valore da mettere in fondo in una variabile d'appoggio
            //Scalo tutti i valori da 0 a n
                for(int i = 0; i < n-1; i++){
                    a[i]=a[i+1];
                }
                a[n-1]= appoggio; //salvo il primo numero in fondo 
        }
    }

    return a;
}

void main()
{
    int a[7];
    a[0] = 4;
    a[1] = 6;
    a[2] = 9;
    a[3] = 100;
    a[4] = 4;
    a[5] = 1;
    a[6] = 8;

    for(int i=0; i < 7; i++){
        printf("%d ", a[i]);
    }

    int k = -2;
    printf("\nK = %d\n", k);
    int* risp = ruot(a, 7, k);

    //stampo il'array ruotato
    for(int p = 0; p < 7; p++){
        printf("%d ", risp[p]);
    }
    printf("\n");
}