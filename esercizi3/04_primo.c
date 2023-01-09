#include <stdio.h>
#include <math.h>

// Funzione che dato un numero naturale n stampa "n è un numero primo" o "n non è un numero primo"

int primo(int n)
{
    double fatt; //resto della divisione di n/i
    int uft; //uft: ultimo divisore trovato
    
    //divisori di n:
    for(int i = 1; i < n; i++) //i saranno i vari divisori che testo
    {
        fatt = n % i;
        if(fatt == 0)
        {
            //fatt è un divisore, quindi lo assegno a uft
            uft = i;  
        }
            //fatt non è un divisore
    }
    
    if(uft == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void main()
{
    int n;
    printf("Inserisci il numero (n): ");
    scanf("%d", &n);

    int p = primo(n);
    if(p == 1)
        printf("%d è un numero primo\n", n);
    else
        printf("%d non è un numero primo\n", n);

    //vedo quanti sono i numeri primi tra 1 e 100
    
    int count = 0;
    for(int i = 1; i <= 100; i++)
    {
        int p = primo(i);
        if(p == 1)
            count++;
    }
    
    printf("Numero di numeri primi trovati da 1 a 100: %d\n", count);
    return(0);
}