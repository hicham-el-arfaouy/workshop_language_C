#include <stdio.h>

void main(){
    int n = 0, p = 1, s = 0, number;

    printf("Donnez nombre : ");
    scanf("%d", &number);

    for(int i = 0; i < number; i++){
        printf("%d \n", n);
        s = n + p;
        n = p;
        p = s;
    }
    
}