#include <stdio.h>
#include <math.h>

// Funzione che date le coordinate di due punti sul piano carteriano, restituisce la loro distanza euclidea


double distanza(double x1, double y1, double x2, double y2)
{
 
    double d = ( (x1-x2) * (x1-x2) ) + ( (y1-y2) * (y1-y2) );
    double dist = sqrt(d);
    return dist;
}


void main()
{
    printf("Inserire le coordinate (x1,y1) e (x2,y2) per cui si vuole calcolare la distanza: \n");
    double x1;
    printf("x1: ");
    scanf("%lf", &x1);
    double y1;
    printf("y1: ");
    scanf("%lf", &y1);
    double x2;
    printf("x2: ");
    scanf("%lf", &x2);
    double y2;
    printf("y2: ");
    scanf("%lf", &y2);

    double dist = distanza(x1, y1, x2, y2);
    printf("distanza tra (%lf,%lf) e (%lf,%lf) = %lf\n", x1, y1, x2, y2, dist);
    
    return(0);
}