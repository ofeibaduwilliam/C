#include <stdio.h>

int main(){
    char sentence[90];
    printf("Enter a sentence tot be displayed: ");
    fgets(sentence, 90, stdin);
    printf("%s", sentence);
    return 0;
}