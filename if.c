#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2, int num3){
    int result;

    if(num1 >= num2 && num1 >= num3){
        result = num1;
    } else if(num2 >= num1 && num2 >= num3){
        result = num2;
    } else {
        result = num3;
    }

    return result;
}

int main(){
    // printf("%d\n", max(50,100,50));
    if(3 > 2 || 2 > 5){
        printf("True\n");
    }

    if(2 == 2){
        printf("True\n");
    }

    if(!(3 < 2)){
        printf("Negation!\n");
    }

    return 0;
}