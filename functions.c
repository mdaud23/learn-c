#include <stdio.h>
#include <stdlib.h>

void sayHi();

int main()
{
    sayHi("Bella", 24);
    sayHi("Reza", 0);
    sayHi("Fera", 0);
    return 0;
}

void sayHi(char name[], int age){
    printf("Hi! %s, you are %d\n", name, age);
}