#include <stdio.h>
#include <stdlib.h>

int main()
{
    char characterName[] =  "John";
    int characterAge = 35;
    printf("Hello, World!\n");
    printf("My name is %s\n", characterName);
    printf("I am %d years old\n", characterAge);

    characterAge = 36;
    printf("Next year, i will be %d\n", characterAge);
    return 0;
}