#include <stdio.h>
#include <math.h>

int main(void) {
    int a, b, c;
    float x, y, d;

    printf("Enter the value of a, b, c to form a quadratic equation: ");
    scanf("%d%d%d", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if(d > 0){
        x = (-b + sqrt(d)) / (2.0 * a);
        y = (-b - sqrt(d)) / (2.0 * a);
        printf("Roots are real and different.\n");
        printf("x = %f\ny = %f\n", x, y);
    }else if(d == 0){
        x = -b / (2.0 * a);
        printf("Roots are real and equal.\n");
        printf("x = y = %f\n", x);
    }else{
        float real = -b / (2.0 * a);
        float imag = sqrt(-d) / (2.0 * a);
        printf("Roots are imaginary.\n");
        printf("Root 1 = %f + %fi\n", real, imag);
        printf("Root 2 = %f - %fi\n", real, imag);
    }

    return 0;
}
