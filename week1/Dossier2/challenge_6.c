#include <stdio.h>

void main(){
    int number;

    printf("Donnez un nombre : ");
    scanf("%d", &number);

    if(number == 0){
        printf("le nombre est ZERO");
    }else if(number > 0) {
        printf("le nombre est POSITIVE");
    }else if(number < 0){
        printf("le nombre est NEGATIVE");
    }else{
        printf("le nombre est NULL");
    }
}