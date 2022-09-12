#include <stdio.h>

void main(){
    char date[10];
    int jour, mois, annee;

    printf("Donnez un date : ");
    scanf("%s", &date);
    
    jour = (int)(date[0]);

    printf("le charactere %d", jour);
    
}