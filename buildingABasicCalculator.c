#include<stdio.h>
#include<stdlib.h>

int main(){

    int num1, num2, answer;

    printf("Enter first number: \n");
    scanf("%d", &num1);
    printf("Enter second number: \n");
    scanf("%d", &num2);
    answer = num1 * num2;

    printf("The answer is %d", answer);
    return 0;



}