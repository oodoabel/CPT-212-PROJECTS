#include <stdio.h>
int main (){
    
    float firstNumber, secondNumber, thirdNumber;

    printf("\n\nFINDING THE AVERAGE OF THREE NUMBERS\n\n");
    printf("Enter the three numbers you want to find the average: \n");
    scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);

    float average = (firstNumber + secondNumber + thirdNumber) / 3;
    printf("The average is %f", average);

}