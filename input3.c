#include <stdio.h>

int main(){
    char name[20];
    printf("Please enter your name: ");
    scanf("%s", &name);
    printf("Your name is %s", name);
    printf("\nFuck you, %s", name);
    return 0;
}