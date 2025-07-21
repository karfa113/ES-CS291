#include<stdio.h>

int main(void){
    int x,y;
    
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    
    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
   
    if(y != 0){
        printf("x / y = %d\n", x / y);  
        printf("x %% y = %d\n", x % y); 
    }else{
        printf("Division or modulus by zero is not allowed.\n");
    }
    
    return 0;
}