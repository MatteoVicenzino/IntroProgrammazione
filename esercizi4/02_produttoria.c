#include <stdio.h>

//

int s_ric(int i)
{
    //i deve andare da n a 0
    //il caso base è (i = 0) 
    if (i == 0)
        return(1);

    // il caso non base è (i != 0)

    return(2 * s_ric(i - 1));

}

float x_ite(float a, float b)
{
    float x = 1; // inizializzo la sommatoria x a 0

    for(int i = a; i <= b/2; i++)
    {
        //la produttoria da a a b/2
        x = x * (s_ric(i)/a);
    }
    return (x - b);
}

void main()
{
    //chiedo all'utente il valore di 
    int n;
    printf("Inserisci il numero (n): ");
    scanf("%d", &n);

    int s = s_ric(n); //richiamo la funzione n(j)
    printf("2^n: %d\n", s);


    //chiedo all'utente i valori di a e b
    float a;
    printf("Inserisci il numero (a): ");
    scanf("%f", &a);
    float b;
    printf("Inserisci il numero (b): ");
    scanf("%f", &b);

    float x = x_ite(a, b); //richiamo la funzione x(a, b)
    printf("produttoria precedente da A a B/2: %f\n", x);
    
    return(0);
}

