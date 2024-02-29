#include<stdio.h>
int main()
{
float principal, rate, time;

printf("enter value for principal\n");
scanf("%f", &principal);

printf("enter value for rate\n");
scanf("%f", &rate);

printf("enter value for time \n");
scanf("%f", &time);

float interest= (principal*rate*time)/100;
printf("Simple interest is %f", interest);

return 0;

}