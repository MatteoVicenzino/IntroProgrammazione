#include<stdio.h>
#include<stdlib.h>

//data una lista elimina i valori duplicati

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

int duplicati(puntatore a)
{
    puntatore testa = a;
    puntatore appoggio = a; //creo un avariabile d'appoggio scorre sulla lista
    //inizializzo questa variabile con la testa
    
    int a = malloc(sizeof(int))

    while(appoggio->next != NULL){ //scorro la lista e salvo gli elementi in array
        appoggio->info;
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
    
    a = duplicati(a);
    printlist(a);
    printf("\n");
}