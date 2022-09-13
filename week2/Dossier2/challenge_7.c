#include <stdio.h>

void main(){
    char charactere;
    int charInInt;

    printf("Donnez un charactere : ");
    scanf("%c", &charactere);
    charInInt = charactere;
    printf("le code ASCII est %d \n", charInInt);
    if(charInInt >= 65 && charInInt <= 90){
        printf("le charactere est majuscule");
    }else{
        printf("le charactere est minuscule");
    }
}