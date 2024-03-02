#include <stdio.h>
int main() {
    float basicSalary, housing, childSupport, transport, tax, grossTotal;

    printf("\n\nA PROGRAMM FOR CALCULATING GROSS SALARY\n\n");
    printf("Enter a basic salary: \n");
    scanf("%f", &basicSalary);

    housing = basicSalary * 0.45;
    childSupport = basicSalary * 0.10;
    transport = basicSalary * 0.15;
    tax = basicSalary * 0.10;

    grossTotal = housing + childSupport + transport + tax + basicSalary;

    printf("Gross total: %f\n\n", grossTotal);

}