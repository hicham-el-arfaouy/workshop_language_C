#include <stdio.h>

void main(){
    int a, b;

    printf("Donnez premier nombre : ");
    scanf("%d", &a);

    printf("Donnez deuxieme nombre : ");
    scanf("%d", &b);

    if(a == b){
        printf("le somme triple est %d", (a+b)*3);
    }else{
        printf("le somme est %d", a+b);
    }
}