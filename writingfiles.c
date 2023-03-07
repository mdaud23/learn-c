#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE * fpointer = fopen("employees.txt", "w");
    // "w" mode to overwrite 
    // "a" mode to append
    
    fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

    fclose(fpointer);
    return 0;
}