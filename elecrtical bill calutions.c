#include <stdio.h>

float calculateBill(int units);

int main(){


    int units;
    float bill;

    
    scanf("%d", &units);
}
float calculateBill(int units)
{
    float amount = 0;

    if (units <= 50)
        amount = units * 1.50;
    else if (units <= 100)
        amount = (50 * 1.50) + (units - 50) * 2.00;
    else if (units <= 200)
        amount = (50 * 1.50) + (50 * 2.00) + (units - 100) * 3.00;
    else
        amount = (50 * 1.50) + (50 * 2.00) + (100 * 3.00) + (units - 200) * 5.00;

    return amount;
}