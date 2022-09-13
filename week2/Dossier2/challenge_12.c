#include <stdio.h>
#include <string.h>

void main(){
    int h, m, s, first, second;

    printf("first HH:MM:SS : ");
    scanf("%d:%d:%d", &h, &m, &s);
    first = s + (m * 60) + (h * 3600);

    printf("second HH:MM:SS : ");
    scanf("%d:%d:%d", &h, &m, &s);
    second = s + (m * 60) + (h * 3600);

    if(first > second){
        printf("Le deuxième instant vient avant le premier");
    }else if(first < second){
        printf("Le premier instant vient avant le deuxième");
    }else{
        printf("Il s'agit du même instant");
    }
}