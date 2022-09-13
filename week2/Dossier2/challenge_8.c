#include <stdio.h>

void main(){
    int moyenne;

    printf("Donnez un moyenne : ");
    scanf("%d", &moyenne);

    if(moyenne < 10){
        printf("recale");
    }else if(moyenne >= 10 && moyenne < 12) {
        printf("mention passable");
    }else if(moyenne >= 12 && moyenne < 14) {
        printf("mention assez bien");
    }else if(moyenne >= 14 && moyenne < 16) {
        printf("mention bien");
    }else {
        printf("mention tres bien");
    }
}