#include <stdio.h>

void main(){
    
    int a, b, c, max;

    printf("Entre numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;

    if(b>a){
        max = b;
    }else if(c>a){
        max = c;
    }

    printf("max : %d", max);

}