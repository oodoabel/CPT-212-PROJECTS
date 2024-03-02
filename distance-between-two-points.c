#include <stdio.h>
#include <stdlib.h>
int main(){
    float x1, x2, y1, y2, distance;
    printf("\nFINDING THE DISTANCE BETWEEN TWO POINT\n\n");

    printf("Enter the first point in the order of x y respectively: \n");
    scanf("%f %f", &x1, &x1);

    printf("Enter the second point in the order of x y respectively: \n");
    scanf("%f %f", &x2, &x2);

    distance = (((x2-x1) * (x2-x1)) + ((y2-y1) * (y2-y1)));

    float a = distance ^ 0.5;

    printf("The distance between the two points is: %f", a);

}