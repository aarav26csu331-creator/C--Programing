#include <stdio.h>

int main()
{
    float basic, allowance, bonus, salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    printf("Enter allowance: ");
    scanf("%f", &allowance);

    printf("Enter bonus: ");
    scanf("%f", &bonus);

    salary = basic + allowance + bonus;

    printf("Final Salary = %.2f\n", salary);

    return 0;
}