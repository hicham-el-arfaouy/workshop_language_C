#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int week;
    char weekString[20];

    week = rand() % 7;

    printf("%d \n", week);

    switch(week){
        case 0 : strcpy(weekString, "Monday"); break;
        case 1 : strcpy(weekString, "Thursday"); break;
        case 2 : strcpy(weekString, "Wednesday"); break;
        case 3 : strcpy(weekString, "Thusday"); break;
        case 4 : strcpy(weekString, "Friday"); break;
        case 5 : strcpy(weekString, "Saturday"); break;
        case 6 : strcpy(weekString, "Sunday"); break;
        default : strcpy(weekString, "Error");
    }

    printf("%s", weekString);
}