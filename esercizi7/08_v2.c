#include<stdio.h>
#include<stdlib.h>

int myfun(int a[], int b[], int n){
    for(int i=0; i<n; i++){
        int flag = 0; //parto dal fatto che i predicati sono tutti veri
        for(int j=0; j<n; j++){
            if(j!=i){
                if(a[i] % a[j] == 0){ //verifico il predicato, se è falso flaggo
                    flag = 1;
                }
            }
        }
        if(flag == 0){ //se non ho flaggato tutti i predicati sono veri
            b[i] = a[i]; //quindi copio
        }
        else{ //se invece ho trovat almeno un predicato falso flag è 1
            b[i] = 0; //quindi non copio
        }
    }
    return b;
}

void main()
{
    int a[4] = {5, 4, 3, 2};
    int b[4] = {0, 0, 0, 0};
    myfun(a, b, 4);
    for(int i = 0; i < 4; i++)
        printf("%d ", b[i]);
    printf("\n");
}
