#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE * fpointer = fopen("names.txt", "w");
    fprintf(fpointer, "Ampong Akwasi, Electrical\nOfei-Badu William, Computer\nObi David, Electrical\nOhene Prince, Pharmacy");
    fclose(fpointer);
    return 0;
}
