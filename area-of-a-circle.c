#include <stdio.h>
int main(){

    float celsius, farenheit;
    printf("Enter Celsius: \n");
    scanf("%f", &celsius);

    farenheit = celsius * 1.8 + 32;

    printf("%f", farenheit);

}