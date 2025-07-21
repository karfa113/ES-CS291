#include<stdio.h>
void using(int a, int b);
void NotUsing(int a, int b);

int main(void){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: \n");
    printf("a = %d \nb = %d", a, b);
    using(a,b);
    NotUsing(a,b);
    return 0;
}

void using(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    printf("\nUsing third variable: \n");
    printf("a = %d \nb = %d", a, b);
}

void NotUsing(int a, int b){
    a = a^b;
    b = a^b;
    a = a^b;
    printf("\nWithout using third variable: \n");
    printf("a = %d \nb = %d", a, b);
}
