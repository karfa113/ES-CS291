#include<stdio.h>

int main(void){
    float a,b,r;

    printf("Enter length and breadth of a rectangle: ");
    scanf("%f %f", &a, &b);
    printf("Perimeter of the rectangle: %f\n", 2 * (a+b));
    printf("Area of the rectangle: %f\n", a*b);

    printf("Enter radius of a circle: ");
    scanf("%f", &r);
    printf("Circumference of the circle: %f\n", 3.14 * 2 * r);
    printf("Area of the circle: %f\n", 3.14 * r * r);

    return 0;
}