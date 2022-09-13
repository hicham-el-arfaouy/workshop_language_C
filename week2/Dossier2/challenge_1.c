#include <stdio.h>

void main(){
    int number;

    printf("Donnez un nombre : ");
    scanf("%d", &number);

    if(number%2 == 0){
        printf("le nombre %d est paire", number);
    }else{
        printf("le nombre %d est impaire", number);
    }
}