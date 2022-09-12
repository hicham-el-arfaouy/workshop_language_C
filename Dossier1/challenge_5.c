#include <stdio.h>

void main(){
    float f, c;
    printf("Donnez la température en Fahrenheit : ");
    scanf("%f", &f);

    c = (f-32)/1.8;
    printf("%.2f F = %.2f C \n", f, c);

    if(c > 35){
        if(c > 50){
            printf("température très chaud");
        }else{
            printf("température chaud");
        }
    }
    if(c < 35){
        if(c > 0){
            printf("température froid");
        }else{
            printf("température très froid");
        }
    }

}