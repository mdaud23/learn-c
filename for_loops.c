#include <stdio.h>
#include <stdlib.h>

int main(){

    for(int i = 1; i <= 5; i++){
        printf("%d\n", i);
    }

    printf("Next\n");

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42};

    for(int j = 0; j < 6; j++){
        printf("%d\n", luckyNumbers[j]);
    }

    return 0;
}