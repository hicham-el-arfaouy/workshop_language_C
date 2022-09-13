#include <stdio.h>
#include <math.h>

void main(){
    int a, b, c, delta;

    printf("Donnez premier nombre : ");
    scanf("%d", &a);

    printf("Donnez deuxieme nombre : ");
    scanf("%d", &b);

    printf("Donnez troisieme nombre : ");
    scanf("%d", &c);

    printf("equation est %dx² + %dx + %d \n", a, b, c);

    delta = pow(b, 2) - (4 * a * c);

    printf("Delta est %d \n", delta);

    if(delta < 0){
        printf("Pas de solution");
    }else{
        if(delta == 0){
            float x;
            x = ((-b)-sqrt(delta)) / (2 * a);
            printf("seul solution est = %.2f", x);
        }else{
            float x1, x2;
            x1 = ((-b)-sqrt(delta)) / (2 * a);
            x2 = ((-b)+sqrt(delta)) / (2 * a);
            printf("deux solution x1 = %.2f   x2 = %.2f", x1, x2);
        }
    }
    
}