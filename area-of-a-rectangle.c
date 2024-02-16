#include <stdio.h>
int main(){
    float length, breath, area;

    printf("Enter length");
    scanf("%f", &length);

    printf("Enter breath");
    scanf("%f", &breath);

    area = length * breath;
    printf("%f", area);
}