#include <stdio.h>

void main(){

    int number, inverse = 0;

    printf("Donnez nombre : ");
    scanf("%d", &number);

    while(number != 0){
        inverse = (inverse * 10) + (number % 10);
        number /= 10;
    }

    printf("inverse : %d", inverse);

}