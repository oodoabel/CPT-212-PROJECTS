#include <stdio.h>
int main(){
    float firstNumber, secondNumber, sum, product;
    printf("\nFINDING THE PRODUCT AND SUM OF TWO NUMBERS\n\n");
    printf("Enter two numbers: ");
    scanf("%f %f", &firstNumber, &secondNumber);

    sum = firstNumber + secondNumber;
    product = firstNumber * secondNumber;

    printf("The sum is: %f\nThe product is: %f\n\n", sum, product);

}