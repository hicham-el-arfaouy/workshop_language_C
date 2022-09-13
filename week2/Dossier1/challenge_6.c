#include<stdio.h>
#include<stdbool.h>


bool isPremier(int n){
    bool isPrime = true;

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
    }
    
    return isPrime;

}

void main() {
    
    int n;

    printf("Donnez nombre : ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        if(isPremier(i)){
            printf("Nombre %d est premier \n", i);
        }
    }

}
