/*Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80%
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%*/
#include <stdio.h>
int main()
{
    int basic_salary = 0;
    float gross_salary = 0;
    printf("Enter your basic salary  ");
    scanf("%d",&basic_salary);
    if (basic_salary <= 10000)
    {
        gross_salary = basic_salary + basic_salary * 100 / 100;
    }
    else if (basic_salary <= 20000)
    {
        gross_salary = basic_salary + basic_salary * 25 / 100 + basic_salary * 90 / 100;
    }
    else if (basic_salary > 20000)
    {
        gross_salary = basic_salary + basic_salary * 30 / 100 + basic_salary * 95 / 100;
    }
    printf("Total gross salary = %.2f", gross_salary);

    return 0;
}