#include<stdio.h>
#include<stdlib.h>

//imposto la struttura della lista
struct elemento{ 
    int info;
    struct elemento* next;
};

typedef struct elemento ElementoLista; //chiamno la struttura con ElementoLista
typedef ElementoLista* puntatore; //definisco il puntatore alla struttura

//funzione per popolare / inizializzare la lista
int def_list()
{
    puntatore* testa = NULL;
    
    puntatore elem1 = malloc(sizeof(ElementoLista));
    testa = elem1;
    elem1->info = 10;
    elem1->next = NULL;

    puntatore elem2 = malloc(sizeof(ElementoLista)); //creo quadratino secondo struct
    elem1->next = elem2; //lego l'ultimo puntatore al nuovo quadratino
    elem2->info = 20; //popolo
    elem2->next = NULL; //popolo

    puntatore elem3 = malloc(sizeof(ElementoLista)); //creo quadratino secondo struct
    elem2->next = elem3; //lego l'ultimo puntatore al nuovo quadratino
    elem3->info = 30; //popolo
    elem3->next = NULL; //popolo
    
    return testa;
}

int len_list(puntatore a)
{
    if(a == NULL) return 0;
    return len_list(a->next) + 1;
}

void main()
{
    puntatore a = def_list();
    printf("la lista è lunga: %d\n", len_list(a));
}