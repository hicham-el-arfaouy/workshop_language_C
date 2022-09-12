#include <stdio.h>

void main(){

    int largeur, longueur;

    printf("Donnez largeur : ");
    scanf("%d", &largeur);

    printf("Donnez longueur : ");
    scanf("%d", &longueur);

    printf("la circonférence d'un rectangle est :  %d \n", 2*(largeur + longueur));
}