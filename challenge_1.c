#include <stdio.h>

void main(){
    char nom[15];
    char prenom[15];
    char sexe[10];
    int age;
    int telephone;

    printf("----- Type your Informations -----\n");
    printf("Nom : ");
    scanf("%s", &nom);

    printf("Prenom : ");
    scanf("%s", &prenom);

    printf("Sexe : ");
    scanf("%s", &sexe);

    printf("Age : ");
    scanf("%d", &age);

    printf("Telephone : ");
    scanf("%d", &telephone);

    printf("Hi %s %s ", nom, prenom);
}