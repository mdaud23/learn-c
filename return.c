#include <stdio.h>
#include <stdlib.h>

double cube(int num); // This is prototyping, kalo ga mau nulis ini, functionnya pindahin ke atas main

int main()
{
    printf("Answer: %f", cube(2));

    return 0;
}

double cube(int num){
    double result = num * num * num;
    return result;
}