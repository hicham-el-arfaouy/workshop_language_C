#include <stdio.h>

void main(){

    int a, b, c, d, somme;

    printf("Donnez premiere : ");
    scanf("%d", &a);

    printf("Donnez deuxieme : ");
    scanf("%d", &b);

    printf("Donnez troisieme : ");
    scanf("%d", &c);

    printf("Donnez quatrieme : ");
    scanf("%d", &d);

    somme = a + b + c + d;

    printf("la somme est :  %d \n", somme);
    printf("la moyenne est :  %.2f \n", ((float)somme / 4));
}