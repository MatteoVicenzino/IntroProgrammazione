#include<stdio.h>
#include<stdlib.h>

int a_ite(int a[], int n){
    int a_n;
    int a_2 = 0;
    int a_1 = 0;

    for(int i=3; i<n; i++){
        if(a_1 > 2*(a_2)){
            a_n = (a_2 + a_1 -1)*(i +1);
        }
        else{
            a_n = (a_2 - a_1 +1) * (a_2 +1)*(a_2 +1);
        }
        a_2 = a_1;
        a_1 = a_n;
    }
}

void main(){
    int a[5] = {1, 2, 3, 4, 5};
    int risp = a_ite(a, 5);
    printf("%d\n", risp);
}