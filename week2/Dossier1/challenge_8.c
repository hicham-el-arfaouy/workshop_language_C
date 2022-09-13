#include <stdio.h>
#include <math.h>

float fun(float n){
    return pow(n, 3) + (12 * pow(n, 2)) + 1;
}

void main(){

    float x, a = -15, b = -10;

    do{
        x = (a + b) / 2;

        if(fun(a) * fun(x) <= 0){
            b = x;
        }else{
            a = x;
        }
    }while(b - a > 0.00001);

    printf("---- %f ----- \n", x);
}