#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
    int age = 30;
    int * pAge = &age;
    double gpa = 4.0;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age's memory address os : %p\n", &age);
    
    return 0;
}