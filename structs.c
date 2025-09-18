#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    char name[50];
    char course[50];
    int age;
    double cwa;
};

int main(){
    struct Student student1;
    strcpy(student1.name, "William");
    strcpy(student1.course, "Computer Engineering");
    student1.age = 18;
    student1.cwa = 87.5;

    printf("%s is a student of KNUST. He reads %s and is one of the best to ever do it. He is %d years old and has a CWA of %.2f to match it.", student1.name, student1.course, student1.age, student1.cwa);
    
    return 0;
}