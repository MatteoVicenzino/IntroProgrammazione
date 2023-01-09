#include<stdio.h>
#include<stdlib.h>

struct elemento{
    int info; //nome della variabile che è memorizzata nella casella
    struct elemento* next; //puntatore al prossimo elemento della lista (next)
};

//typedef struct elemento ElementoDiLista; //ElementoDiLista è il nome di struct elemento
typedef struct elemento Elemento; //Elemento è il nome di struct elemento
typedef Elemento* Puntatore; //Puntatore è il nome del puntatore al Elemento (h0 vedi appunti)


int get_data()
{
    Puntatore p_A_testa = NULL; //creo un puntatore a nulla che punterà al primo elemento della lista
    
    Puntatore elem1 = malloc(sizeof(Elemento));
    //alloco memoria di dimensione Elemento e salvo il puntatore a quella memoria sulla variabile elem1
    elem1->info = 10; //popolo lo heap oppure (*elem1).info = 10;
    elem1->next = NULL; //popolo lo heap oppure (*elem1).next = NULL
    //ora collego il puntatore p_A_elem1 (che puntava a NULL), lo collego a emlem1
    p_A_testa = elem1;

    //creo una lista con tot valori dopo primo
    //chiedo un valore da inserire nella lista all'utente
    int val;
    printf("inserisci valore: ");
    scanf("%d", &val);

    while(val!=-1){
        elem1->next = malloc(sizeof(Elemento)); //creo il prossimo quadratino direttamente sul puntetore che esce dal quadratino precedente
        elem1 = elem1->next; //dico che il putatore da elem1 (sta puntando alla memoria che ho allocato) la memoria nuova si chiama di nuovo elem1 perché così funziona al prossimo ciclo while
        elem1->info = val; //popolo il nuovo elem1 con val

        //chiedo il val successivo prima di uscire dal while così vedo se è -1
        printf("inserisci valore: ");
        scanf("%d", &val);
    }
    //creo l'ultimo puntatore della lista che non punta a nulla
    elem1->next = NULL;
    //ritorno  il puntatore alla testa della lista
    return  p_A_testa;
}

int print_data(Puntatore a)
{
    if(a==NULL) return 0;
    printf("%d\n", a->info);
    print_data(a->next);
    
}

void main()
{
    Puntatore a = get_data();
    print_data(a);
}