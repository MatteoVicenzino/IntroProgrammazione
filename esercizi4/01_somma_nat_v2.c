#include <stdio.h>
#include <math.h>

// Funzione somma n dei primi j numeri naturali iterativa
// Funizone somma x di n con j con j che va da a a b ricorsiva

int n_ite(int j)
{
    int n = 0; //inizializzo la sommatoria a 0
    for(int i = 0; i <= j; i++)
    {
        n = n + i; // la sommatoria n è n+i, per i che va da 0 a j
    }
    return n;
}

int x_ric(int a, int b)
{
    int x;
    if(b == a)
        return n_ite(a);
    return (n_ite(b) + x_ric(a, b-1));
    
}

void main()
{
    //chiedo all'utente il valore di j
    int j;
    printf("Inserisci il numero (j): ");
    scanf("%d", &j);

    int n = n_ite(j); //richiamo la funzione n(j)
    printf("somma dei primi j numeri: %d\n", n);


    //chiedo all'utente i valori di a e b
    int a;
    printf("Inserisci il numero (a): ");
    scanf("%d", &a);
    int b;
    printf("Inserisci il numero (b): ");
    scanf("%d", &b);

    int x = x_ric(a, b); //richiamo la funzione x(a, b)
    printf("Sommatoria della sommatoria precedente da A a B: %d\n", x);
    
    return(0);
}

