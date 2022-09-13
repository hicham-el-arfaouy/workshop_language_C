#include <stdio.h>

void main(){
    char charactere;

    printf("Donnez un charactere : ");
    scanf("%c", &charactere);

    switch(charactere){
        case 'a':
            printf("voyelle");
            break;
        case 'e':
            printf("voyelle");
            break;
        case 'i':
            printf("voyelle");
            break;
        case 'o':
            printf("voyelle");
            break;
        case 'u':
            printf("voyelle");
            break;
        case 'y':
            printf("voyelle");
            break;
        default :
            printf("NON voyelle");
    }
}