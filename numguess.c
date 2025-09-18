#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
    int secretNumber = 5;
    int guess;
    int numtries = 0;
    int allowedTries = 10;
    int out = 0;

    while(guess != secretNumber && out == 0){
        if(numtries < allowedTries){
            printf("Enter a number: ");
            scanf("%d", &guess);
            numtries ++;
            if(guess != secretNumber){
                printf("Wrong guess, try again\n");
                printf("You have %d guesses left\n", allowedTries-numtries);
            }else {
                continue;
            }
        }else{
            out = 1;
        }
        

    }

    if (out == 1){
        printf("Out of guesses, you lose");
    }else {
    printf("Success! You have guessed the number");
    }


    return 0;
}