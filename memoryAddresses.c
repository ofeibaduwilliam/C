#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
    int age = 30;
    double gpa = 3.9;
    char grade = 'A';
    printf("The following are the hexadeciaml memory addresses of the following variables: \nage: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);

    return 0;
}