#include<stdio.h>

int main(void){
    int x,y;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    
    printf("Sum of the two numbers: %d", x + y);
    
    return 0;
}