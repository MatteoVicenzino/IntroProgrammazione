#include <stdio.h>
#include <stdlib.h>

struct elemento{
    int*a;
    int size;
    struct elemento*next;
};

typedef struct elemento ElementoLista;
typedef ElementoLista* puntatore;

puntatore define(){
    puntatore testa = NULL;
    puntatore def = malloc(sizeof(ElementoLista));
    testa = def;
    int siz;
    printf("size array: ");
    scanf("%d", &siz);

    while(siz != 0){
        def->size = siz;
        int* arr = (int*)malloc(sizeof(int)*siz);
        def->a = arr;
        for(int i = 0; i<siz; i++){
            int val;
            scanf("%d", &val);
            arr[i] = val;
        }
        def->next = def;
        printf("size array: ");
        scanf("%d", &siz);
    }
    def->next = NULL;
    return testa;
}

void printlist(puntatore lista){
    if(lista->next==NULL) return;
    for(int i = 0; i < lista->size; i++){
        printf("%d", *(lista->a + i));
    }
    printlist(lista->next);
}

void main(){
    puntatore a = define();
    printlist(a);
    
    
}