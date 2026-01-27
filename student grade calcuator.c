#include <stdio.h>

char calculateGrade(int marks)
{
    if (marks >= 90)
        return 'A';
    else if (marks >= 80)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 40)
        return 'D';
    else
        return 'F';   // Fail
}

int main()
{
    int marks;
    char grade;

    printf("Enter marks: ");
    scanf("%d", &marks);

    grade = calculateGrade(marks);

    if (grade == 'F')
        printf("Grade: Fail\n");
    else
        printf("Grade: %c\n", grade);

    return 0;
}