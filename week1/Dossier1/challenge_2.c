#include <stdio.h>

void main() {
    float f, c;

    printf("Celsius : ");
    scanf("%f", &c);

    f = (c*1.8)+32;

    printf("%.2f C = %.2f F", c, f);
}