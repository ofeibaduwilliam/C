#include <stdio.h>

int main(){
    char color[20];
    char noun[20];
    char name[20];
    printf("Enter a color: ");
    scanf("%s", &color);
    printf("Enter a plural noun: ");
    scanf("%s", &noun);
    printf("Enter a celebrity's name: ");
    scanf("%s", &name);
    printf("\nRoses are %s\n", color);//A color
    printf("%s are blue\n", noun);//A plural noun
    printf("I love %s\n", name);//A random name
    return 0;
}