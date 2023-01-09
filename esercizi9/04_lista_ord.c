#include<stdio.h>
#include<stdlib.h>

//data una lista ordinata e un k inserisce k in base all'ordine

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

int insert(puntatore a, int k)
{
    puntatore testa = a;
    puntatore appoggio = a; //creo un avariabile d'appoggio scorre sulla lista
    //inizializzo questa variabile con la testa
    
    puntatore k_position; //creo un puntatore in cui salverò la posizione di dove mettere k

    while((appoggio->info <= k)&&(appoggio->next != NULL)){
        k_position = appoggio;
        appoggio = appoggio->next;
    }

    puntatore pos_k = malloc(sizeof(ElementoLista));//alloco la memoria per mettere k e chiamo pos_k il puntatore
    k_position->next = pos_k; //collego il puntatore che tiene la posizione di dove mettere k con pos_k
    pos_k->info = k; //popolo con k
    pos_k->next = appoggio; //pos_k->next deve puntare ad appoggio(lasciato in sospeso prima)
    return testa;
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
    
    a = insert(a, k);
    printlist(a);
    printf("\n");
}