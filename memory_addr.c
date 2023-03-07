#include <stdio.h>
#include <stdlib.h>

int main(){

    int age = 23;
    double gpa = 3.82;
    char grade = 'A';

    printf("%p\n", &age);
    printf("%p\n", &gpa);
    printf("%p\n", &grade);

    // Mengetahui memory address bisa sangat berguna kemudian

    // A pointer is just a data type, pointer is just memory address
    // just like int to integer, char to character, double to decimal

    int * pAge = &age;
    double * pGpa = &gpa;
    char * pGrade  = &grade;

    printf("%p\n", pAge); // Note that u don't have to use '&' anymore
    printf("%d\n", *pAge); // dereferencing a pointer to get the stored var
    // with that logic in mind
    printf("%d\n", *&age);

    return 0;
}