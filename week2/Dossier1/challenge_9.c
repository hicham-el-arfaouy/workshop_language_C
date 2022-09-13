#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number, puissance, r = 1;

    do{
        printf("Nombre : ");
        scanf("%d", &number);

        printf("Puissance : ");
        scanf("%d", &puissance);
        
    }while(number <= 0 || puissance < 0);

    for(int i = 1; i <= puissance; i++){
       r = number * r;
    }

    printf("%d\n",r);

    return 0;
}