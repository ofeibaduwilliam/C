#include <stdio.h>

int main(){
    
    char grade;
    printf("Please enter your grade: ");
    scanf("%c", &grade);
    printf("Your remark is: ");

    switch(grade){
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Very Good");
            break;
        case 'C':
            printf("Good");
            break;
        case 'D':
            printf("Average");
            break;
        case 'E':
            printf("Pass");
            break;
        case 'F':
            printf("Fail");
            break;    
        default: 
            printf("Invalid grade");
    }
    
    return 0;
}