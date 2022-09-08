#include <stdio.h>
#include <math.h>

void main(){

    int x1, y1, x2, y2;

    printf("Donnez X de premiere point : ");
    scanf("%d", &x1);

    printf("Donnez Y de premiere point : ");
    scanf("%d", &y1);

    printf("Donnez X de deuxieme point : ");
    scanf("%d", &x2);

    printf("Donnez Y de deuxieme point : ");
    scanf("%d", &y2);


    printf(" la distance entre deux points est :  %.2f \n", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));
}