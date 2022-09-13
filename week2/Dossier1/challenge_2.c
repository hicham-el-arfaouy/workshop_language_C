#include <stdio.h>

void main() {
    int nombre, i, j;

    printf("Nombre : ");
    scanf("%d", &nombre);

    nombre *= 2;

    for(i = 1; i <= nombre; i+=2){
        for(j = i; j <= nombre; j++){
            printf(" ");
        }


        for(j = 1; j <= i; j ++){
            printf("*");
        }
        printf("\n");
    }
}