#include <stdio.h>

void main(){
    int number, i = 0, max, somme = 0;
    int numbers[10];

    do{
        printf("Donnez nombre : ");
        scanf("%d", &number);
        if(number > 0  && number <= 100){
            numbers[i] = number;
            i++;
        }else{
            printf("error\n");
        }
        
    }while(number != 0);
    max = 0;
    for(int j = 0; j < i; j++){
        somme += numbers[j];
        if(max < numbers[j]){
            max = numbers[j];
        }
    }

    printf("somme : %d \nmax : %d", somme, max);

}