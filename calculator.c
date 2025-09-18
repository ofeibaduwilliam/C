#include <stdio.h>

int main(){
    int num1;
    int num2;
    printf("Welcome to the calculator.\n");
    printf("Enter the first number to be added: ");
    scanf("%d", &num1);
    printf("Enter the second number to be added: ");
    scanf("%d", &num2);
    printf("The result of your addition is %d", num1 + num2);
    
    return 0;
}