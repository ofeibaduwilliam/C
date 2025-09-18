#include <stdio.h>

int cube(int number){
    return number*number*number;
}

int main(){
    int answer = cube(3);
    printf("%d is the answer", answer);
    
    return 0;
}