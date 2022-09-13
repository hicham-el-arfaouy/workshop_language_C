#include <stdio.h>

void main(){
    int a;
    char convert;

    while(convert != 'q'){
        printf("\nDonnez nombre d'annee : ");
        scanf("%d", &a);

        printf("Convert to : \n Mois = m\n Jours = j\n Heures = h\n Minutes = n\n Secondes = s\n Quit = q\n");
        printf("Donnez le char : ");
        scanf("%c", &convert);
        scanf("%c", &convert);

        switch(convert){
            case 'q':
                break;
            case 'j':
                printf("Jours : %d", a * 356);
                break;
            case 'h':
                printf("Heures : %d", a * 365 * 24);
                break;
            case 'n':
                printf("Minutes : %d", a * 365 * 24 * 60);
                break;
            case 's':
                printf("Secondes : %d", a * 365 * 24 * 60 * 60);
                break;
            default :
                printf("Mois : %d", a * 12);
        }
    }
    
}