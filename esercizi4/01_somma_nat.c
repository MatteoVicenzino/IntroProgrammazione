#include <stdio.h>
#include <math.h>

// Funzione somma n dei primi j numeri naturali ricorsiva
// Funizone somma x di n con j con j che va da a a b iterativa

int n_ric(int i)
{
    //i deve andare da 0 al valore j inserito
    //il caso base è (i = 0) 
    //la sommatoria dei i numeri in questo caso è 0
    if (i == 0)
        return(0);

    // il caso non base è (i != 0)
    //la sommatoria dei i numeri in questo caso è i + sommatoria dei i-1 numeri 

    return(i + n_ric(i - 1));

}

int x_ite(int a, int b)
{
    int x = 0; // inizializzo la sommatoria x a 0

    for(int j = a; j <= b; j++)
    {
        //la sommatoria x è x + n(j) per i j che vanno da a a b
        x = x + n_ric(j);
    }
    return x;
}

void main()
{
    //chiedo all'utente il valore di j
    int j;
    printf("Inserisci il numero (j): ");
    scanf("%d", &j);

    int n = n_ric(j); //richiamo la funzione n(j)
    printf("somma dei primi n numeri: %d\n", n);


    //chiedo all'utente i valori di a e b
    int a;
    printf("Inserisci il numero (a): ");
    scanf("%d", &a);
    int b;
    printf("Inserisci il numero (b): ");
    scanf("%d", &b);

    int x = x_ite(a, b); //richiamo la funzione x(a, b)
    printf("Sommatoria della sommatoria precedente da A a B: %d\n", x);
    
    return(0);
}

