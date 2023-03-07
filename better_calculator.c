#include <stdio.h>
#include <stdlib.h>

void solve(double num1, double num2, char op){
    double result;

    if(op == '+'){
        result = num1 + num2;
    } else if(op == '-'){
        result = num1 - num2;
    } else if(op == '*'){
        result = num1 * num2;
    } else if(op == '/'){
        result = num1 / num2;
    } else {
        printf("Operation not recognized, returning -1\n");
        result = -1;
    }
    printf("%.2f\n", result);
}

int main(){

    double num1;
    double num2;
    char op;

    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    printf("Enter an operation: ");
    scanf("%s", &op);
    
    solve(num1, num2, op);

    return 0;
}