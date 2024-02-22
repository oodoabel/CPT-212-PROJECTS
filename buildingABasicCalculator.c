#include<stdio.h>
#include<stdlib.h>

int main(){

    double num1, num2, answer;

    printf("Enter first number: \n");
    scanf("%lf", &num1);
    printf("Enter second number: \n");
    scanf("%lf", &num2);
    answer = num1 * num2;

    printf("The answer is %f", answer);
    return 0;



}