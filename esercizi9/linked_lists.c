#include<stdio.h>
#include<stdlib.h>

// DEFINIZIONE DI UNA LISTA LINKATA
// le liste linkate sono formate da due caselline: 
/*

  elemento
______________
| info |  o--|-----> puntatore al prossimo elemento della lista
|------|-----|

*/

struct elemento{
    int info; //nome della variabile che è memorizzata nella casella
    struct elemento* next; //puntatore al prossimo elemento della lista (next)
};

//typedef struct elemento ElementoDiLista; //ElementoDiLista è il nome di struct elemento
typedef struct elemento Elemento; //Elemento è il nome di struct elemento
typedef Elemento* Puntatore; //Puntatore è il nome del puntatore al Elemento (h0 vedi appunti)

void main()
{
    Puntatore p_A_testa = NULL; //creo un puntatore a nulla che punterà al primo elemento della lista
    
    Puntatore elem1 = malloc(sizeof(Elemento));
    //alloco memoria di dimensione Elemento e salvo il puntatore a quella memoria sulla variabile elem1
    elem1->info = 10; //popolo lo heap oppure (*elem1).info = 10;
    elem1->next = NULL; //popolo lo heap oppure (*elem1).next = NULL
    //ora collego il puntatore p_A_elem1 (che puntava a NULL), lo collego a emlem1
    p_A_testa = elem1;

    //CREO IL SECONDO elem2
    Puntatore elem2 = malloc(sizeof(Elemento));
    elem2->info = 10;
    elem2->next = NULL;

    elem1->next = elem2; //ho collegato il putatore da elem1 a elem2

    return p_A_testa;

        
    
    /*
    ListaDiElementi lista = NULL;
    n = 10;
    ListaDiElementi new = malloc(sizeof(ElementoDiLista));
    (*new).info = 1;

    lista = new;
    for(int i=2; i<n; i++) {
        //prossimo elemento, allocato e linkato
        (*new).next = malloc(sizeof(ElementoDiLista)); //sposto puntatore in testa
        new = new->next;
        //assegno nuovo valore
        new.info = i;
    }
    // chiudo la lista, assicurando che non ci sia next non nullo
    new->next = NULL;
    */
}