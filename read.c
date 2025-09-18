#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
    char line[255];
    FILE * fpointer = fopen("names.txt", "r");
    fgets(line, 255, fpointer);
    printf("%s", line);
    fclose(fpointer);
    return 0;
}
