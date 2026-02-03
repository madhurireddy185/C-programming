#include <stdio.h>

float calculateAttendance(int attended, int total)
{
    return ((float)attended / total) * 100;
}

int main()
{
    int attended = 80, total = 100;
    float percentage;

    percentage = calculateAttendance(attended, total);
    printf("Attendance Percentage = %.0f%%", percentage);

    return 0;
}
