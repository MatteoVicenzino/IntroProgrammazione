#include<stdio.h>
#include<stdlib.h>

//

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

int merge(puntatore a, puntatore b)
{
    puntatore testa = a;
    puntatore appoggio = a; //creo un avariabile d'appoggio scorre sulla lista
    //inizializzo questa variabile con la testa
    //appoggio = a;
    puntatore coda_di_a;
    while(appoggio->next != NULL){ //se quello che viene dopo appggio è qualcosa
        coda_di_a = appoggio;
        appoggio = appoggio->next; //appoggio diventa quello che viene dopo
    }
    
    coda_di_a->next = b; //lego appoggio alla testa di b
    return testa;
}

int merge_j(puntatore a, puntatore b, int j)
{
    puntatore testa = a; //testa della lista che ritorno alla fine
    puntatore appoggio = a; //creo un avariabile d'appoggio scorre sulla lista a
    //inizializzo questa variabile con la testa
    puntatore a_j;
    for(int i = 0; i<j; i++){ //per j volte
        a_j = appoggio;
        appoggio = appoggio->next; //appoggio diventa quello che viene dopo
    }
    a_j->next = b; //lego la coda di a(j) alla testa di b
    puntatore nuova_testa_a = appoggio; //salvo il puntatore all'ultima parte di a in nuova testa di a
    puntatore appoggio2 = b; //creo un altro puntatore che scorre su b
    puntatore coda_di_b;
    while(appoggio2->next != NULL){ //se quello che viene dopo appggio è qualcosa
        coda_di_b = appoggio2;
        appoggio2 = appoggio2->next; //appoggio diventa quello che viene dopo
    }
    
    coda_di_b->next = nuova_testa_a; //lego appoggio alla testa di b

    return testa;
}

void printlist(puntatore a)
{
    if(a->next == NULL) return;
    printf("%d ", a->info);
    printlist(a->next);
}

int len_list(puntatore a)
{
    if(a == NULL) return 0;
    return len_list(a->next) + 1;
}

void main()
{
    puntatore a = define();
    printlist(a);
    printf("\n");
    puntatore b = define();
    printlist(b);
    printf("\n");

    int j;
    printf("Inserisci j: ");
    scanf("%d", &j);

    int n_a = len_list(a);
    puntatore a_b;
    if(j <= 0){
        a_b = merge(b, a);
    }
    if(j>0 && j<n_a) {
        a_b = merge_j(a, b, j);
    }
    if(j <= 0){
        a_b = merge(a, b);
    }
    printf("lista unita a + b: ");
    printlist(a_b);
    printf("\n");
}