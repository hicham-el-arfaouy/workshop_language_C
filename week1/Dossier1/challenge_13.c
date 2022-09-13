#include <stdio.h>

void main(){

    int decimal, octale = 0, hexa = 0;
    int aachra = 1;

    printf("Donnez nombre en Decimal : ");
    scanf("%d", &decimal);

    while(decimal != 0){
        octale = ((decimal % 8)*aachra) + octale;
        decimal = decimal / 8;
        aachra *= 10;
    }
    printf("nombre en octale est :  %d \n", octale);

    aachra = 1;
    while(decimal != 0){
        hexa = ((decimal % 16)*aachra) + hexa;
        decimal = decimal / 16;
        aachra *=10;
    }
    printf("nombre en hexa est :  %d \n", hexa);
}