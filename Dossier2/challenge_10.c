#include <stdio.h>
#include <string.h>

void main(){
    int day, mounth, year;
    char mounthString[20];

    printf("Typa Date format DD/MM/AAAA : ");
    scanf("%d/%d/%d", &day, &mounth, &year);

    switch(mounth){
        case 1 : strcpy(mounthString, "January"); break;
        case 2 : strcpy(mounthString, "February"); break;
        case 3 : strcpy(mounthString, "March"); break;
        case 4 : strcpy(mounthString, "April"); break;
        case 5 : strcpy(mounthString, "May"); break;
        case 6 : strcpy(mounthString, "June"); break;
        case 7 : strcpy(mounthString, "July"); break;
        case 8 : strcpy(mounthString, "August"); break;
        case 9 : strcpy(mounthString, "September"); break;
        case 10 : strcpy(mounthString, "October"); break;
        case 11 : strcpy(mounthString, "November"); break;
        case 12 : strcpy(mounthString, "December"); break;
        default : strcpy(mounthString, "Error");
    }

    printf("%d - %s - %d", day, mounthString, year);
}