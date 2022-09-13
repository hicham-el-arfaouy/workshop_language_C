#include <stdio.h>

void main(){
    int nombre;

    printf("Nombre : ");
    scanf("%d", &nombre);

    for(int i = 1; i <= 10; i++){
        printf("%d * %d = %d \n", i, nombre, i * nombre);
    }

}