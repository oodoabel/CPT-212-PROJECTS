#include<stdio.h>
#include<stdlib.h>
int main(){

    // char name[20];
    // printf("Enter your name: \n");
    // scanf("%s", &name);
    // printf("Your name is %s\n", name);

    // return 0;

    // Using fgets in c

    char department[20];
    printf("Enter your department: ");
    fgets(department, 20, stdin);
    printf("Your department is %s", department);

    return 0;


}