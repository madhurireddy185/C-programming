#include <stdio.h>

int calculateBonus(int years)
{
    if (years <= 2)
        return 1000;
    else if (years <= 4)
        return 3000;
    else if (years <= 6)
        return 7000;
    else if (years <= 9)
        return 10000;
    else
        return 15000;
}

int main()
{
    int years, bonus;

    printf("Enter years of experience: ");
    scanf("%d", &years);

    bonus = calculateBonus(years);

    printf("Bonus Amount: %d\n", bonus);

    return 0;
}