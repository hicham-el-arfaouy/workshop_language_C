#include <stdio.h>
#include <string.h>

void main(){
    int number, somme = 0, i = 1;

    do{
        printf("Nombre : ");
        scanf("%d", &number);
        if(number > 0){
            i++;
            somme += number;
        }else{
            printf("error == only positive \n");
        }

    }while(i <= 5);

    printf("somme : %d", somme);
}