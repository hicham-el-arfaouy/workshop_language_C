#include <stdio.h>

void main(){
    
    int number, exemplaire;

    printf("Entre le prix HT : ");
    scanf("%d", &number);

    printf("Entre le nombre d'exemplaire : ");
    scanf("%d", &exemplaire);

    int a = number * exemplaire;
    printf("total HT : %d \n", a);
    printf("tva (20%%) : %.2f \n", a * 0.2);
    printf("total ttc : %.2f \n", (a * 0.2) + a);

}