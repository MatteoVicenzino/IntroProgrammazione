#include<stdio.h>
#include<stdlib.h>

//data una lista ritorna la stessa dal k-esimo elemento

struct elemento{
    int info;
    struct elemento*next;
};

typedef struct elemento ElementoLista;
typedef ElementoLista* puntatore;

int define()
{
    puntatore testa = NULL; //creo puntatore testa
    puntatore elem1 = malloc(sizeof(ElementoLista)); //creo quadratino
    testa = elem1; //faccio puntare testa al prim oquadratino
    //popolo quadratino
    int val;
    printf("valore: ");
    scanf("%d", &val);
    while(val != 0){
        //popolo
        elem1->next = malloc(sizeof(ElementoLista));
        elem1->info = val;//il quadratino già con puntatore al prossimo
        elem1 = elem1->next; //scalo di 1
        //popolo quadratino
        printf("valore: ");
        scanf("%d", &val);
    }
    elem1->next = NULL;
    return testa;
    
}

int cut(puntatore a, int k)
{
    puntatore testa = a;
    puntatore appoggio = a; //creo un avariabile d'appoggio scorre sulla lista
    //inizializzo questa variabile con la testa
    
    puntatore ritorna_k; //creo un puntatore che salverò per essere ritornato

    for(int i = 0; i < k; i++){
        if(appoggio->next != NULL){
            ritorna_k = appoggio;
            appoggio = appoggio->next;
        }
        else{
            printf("k troppo alto\n");
            return testa;
        }
    }

    return ritorna_k;
}

void printlist(puntatore a)
{
    if(a->next == NULL) return;
    printf("%d ", a->info);
    printlist(a->next);
}

void main()
{
    puntatore a = define();
    printlist(a);
    printf("\n");

    int k;
    printf("Inserisci k: ");
    scanf("%d", &k);
    
    a = cut(a, k);
    printlist(a);
    printf("\n");
}