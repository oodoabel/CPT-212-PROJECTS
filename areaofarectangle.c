#include <stdio.h>
int main(){
    float length, breath, area;
    printf("Enter length\n");
    scanf("%f", &length);
    printf("Enter breath\n");
    scanf("%f", &breath);
    area = length * breath;
    printf("The area is %f\n", area);
    // return 0;
}