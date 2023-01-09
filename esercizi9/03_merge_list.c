#include<stdio.h>
#include<stdlib.h>

//la funzione merge unisce due liste date in un unica lista

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
    puntatore coda_di_a; //creo un puntatore in cui salverò la coda di a
    while(appoggio->next != NULL){ //se quello che viene dopo appggio è qualcosa
        //suppongo che dopo appoggio non ci sia nulla(ultimo giro del while) e quindi mi salvo appoggio come coda di a
        //se poi non è vero riprovo al while dopo
        coda_di_a = appoggio;
        appoggio = appoggio->next; //appoggio diventa quello che viene dopo
    }

    //lego la coda di a alla testa di b
    //perché appoggio punta a NULL e quindi appoggio->next è sempre 0
    coda_di_a->next = b; 
    
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
    puntatore b = define();
    printlist(b);
    printf("\n");
    puntatore a_b = merge(a, b);
    printf("lista unita a + b: ");
    printlist(a_b);
    printf("\n");
}