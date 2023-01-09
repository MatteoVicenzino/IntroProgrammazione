#include <stdio.h>

// programma che ordina l'array secondo il predicato
// esiste un j per cui tutti gli i che vanno da da 0 a j predicato vero?

int* ordine(int a[], int n, int k)
{
    //int count = 0; //contatore delle volte che ho fatto lo swap
    for(int i = 0; i < n; i++){ //scorro l'array e trovo il primo numero >k
        if(a[i] > k) {
            //se num>k lo savo in fondo all'array e scalo quelli prima
            
            int appoggio = a[i]; //salvo il valore da mettere in fondo in una cariabile d'appoggio

            //Scalo tutti i valori da i a n
            for(int j = i; j<n-1; j++){
                a[j]=a[j+1];
            }
            a[n-1]= appoggio;
        }
            
    }

    
    return a;
}

void main()
{
    int a[7];
    a[0] = 100;
    a[1] = 6;
    a[2] = 81;
    a[3] = 2;
    a[4] = 8;
    a[5] = 99;
    a[6] = 45;
    
    
    for(int i=0; i<7; i++){
        printf("%d ", a[i]);
    }

    int k = 46;
    printf("\nK = %d\n", k);

    int* x = ordine(a, 7, k);

    for(int q=0; q<7; q++){
        printf("%d ", x[q]);
    }
    printf("\n");
}

