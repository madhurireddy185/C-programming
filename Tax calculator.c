#include <stdio.h>

float calculateTax(float salary)
{
    float tax = 0;

    if (salary <= 250000)
        tax = 0;
    else if (salary <= 500000)
        tax = (salary - 250000) * 0.05;
    else if (salary <= 1000000)
        tax = (250000 * 0.05) + (salary - 500000) * 0.20;
    else
        tax = (250000 * 0.05) + (500000 * 0.20) + (salary - 1000000) * 0.30;

    return tax;
}

int main()
{
    float salary, tax;
    printf("Enter annual salary: ");
    scanf("%f", &salary);

    tax = calculateTax(salary);
    printf("Income Tax = %.2f", tax);

    return 0;
}
