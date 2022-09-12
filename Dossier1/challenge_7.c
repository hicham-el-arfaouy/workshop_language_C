#include <stdio.h>

void main(){

    int firstNumber, secondNumber;

    printf("Donnez premiere : ");
    scanf("%d", &firstNumber);

    printf("Donnez deuxieme : ");
    scanf("%d", &secondNumber);

    printf("%.d + %.d = %.d \n", firstNumber, secondNumber, (firstNumber + secondNumber));
    printf("%.d - %.d = %.d \n", firstNumber, secondNumber, (firstNumber - secondNumber));
    printf("%.d * %.d = %.d \n", firstNumber, secondNumber, (firstNumber * secondNumber));
    printf("%.d %% %.d = %.d \n", firstNumber, secondNumber, (firstNumber % secondNumber));
    printf("%d / %d = %.2f \n", firstNumber, secondNumber, ((float)firstNumber / (float)secondNumber));
}