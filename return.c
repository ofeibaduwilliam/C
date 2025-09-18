#include <stdio.h>

int cube(int number){
    return number*number*number;
}

int main(){
    printf("%d is the answer", cube(3));
    
    return 0;
}