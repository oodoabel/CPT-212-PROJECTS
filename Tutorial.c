#include<stdio.h>
#include<stdlib.h>



int main(){
// DATA TYPES
//     int age = 40;
//     double gpa = 4.0;
//     char grade = 'A';
//     char phrase[] = "Hi academy";

//     return 0;


// // PRINTF

// printf("Hello \" world\n");

// int favNum = 90;
// char singChar = 'i';

// printf("My favourite %s is %d and its float is %f\n", "number", favNum, 500.000);
// printf("To print a single character, we use %c\n", singChar);

// // WORKING WITH NUMBERS
// printf("%f\n", 5 + 4.5);

// printf("%f\n", pow(4, 5));

// printf("%f\n", sqrt(36));
// printf("%f", ceil(36.467));
// printf("%f\n\n", sqrt(36));

// COMMENTS IN C
/*
TO DO
print out text
*/

// CONSTANTS
// CONATANTS ARE PIECE OF INFORMATION IN OUR CODES THAT WE DONT WANT TO MODIFY

// const int FAV_NUM = 5;
// printf("%d\n", FAV_NUM);

// num = 8;

// printf("%d", num);

// GETTING INPUT FROM A USER

// double age;

// printf("Enter your age: ");
// scanf("%lf", &age);
// printf("you are %f yrs old\n", age);

// char name[20];
// printf("Enter your name: ");
// fgets(name, 20, stdin);
// printf("Your name is %s", name);

// BUILDING A BASIC CALCULATOR IN C

double num1;
double num2;
printf("Enter first Numbers: ");
scanf("%lf", &num1);
printf("Enter Second Number: ");
scanf("%lf", &num2);

printf("Answer: %f", num1 + num2);

   

return 0;

}
