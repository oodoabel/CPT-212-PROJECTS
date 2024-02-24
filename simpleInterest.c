#include<stdio.h>
int main()
{
float p, r, t;

printf("enter value for p\n");
scanf("%f", &p);
printf("enter value for r\n");
scanf("%f", &r);
printf("enter value for t\n");
scanf("%f", &t);
float s= p*(r/100)*t;
printf("simple interest is %f", s);

return 0;

}