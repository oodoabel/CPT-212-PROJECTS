#include <stdio.h>
int main(){
    float weight, height, BMI;

    printf("Enter weight in kilograms: \n");
    scanf("%f", &weight);

    printf("Enter height in meters: \n");
    scanf("%f", &height);

    BMI = weight / (height * height);

    printf("Your BMI is %f", BMI);

}