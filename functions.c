#include <stdio.h>

void sayHi(char name[], int age){
    printf("Hello %s, you are %d years old\n", name, age);
}

int main(){

    sayHi("Akua", 19);
    sayHi("Kwaku", 20);
    sayHi("Aba", 90);

    return 0;
}