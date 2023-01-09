#include <stdio.h>

// funzione che salva in b[] gli elementi di a[] che soddisfano il predicato

int pred(int a[], int b[], int n, int i)
{
    for(int j = 0; j < n; j++) {
        if(j != i) {    //per ogni j che sia diverso da i
            if(a[i] % a[j] == 0) 
                return 0;
        }
    }
    return 1;
}

int saveb(int a[], int b[], int n)
{
    for(int i = 0; i < n; i++) {
        if(pred(a, b, n, i) == 1)
            b[i] = a[i];
            
    }
    return 0;
}

void main()
{
    int a[4];
    for(int i = 0; i < 4; i++) {
        printf("Inserisci valore: ");
        scanf("%d", &a[i]);
    }

    int b[4] = {0, 0, 0, 0, 0};

    int app = saveb(a, b, 4);
    for(int i = 0; i < 4; i++)
        printf("%d ", b[i]);
}

