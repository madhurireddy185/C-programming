#include <stdio.h>
int main() {
    int marks;
    printf("enter the marks");
    scanf("%d",&marks);
    if(marks>=80)
    printf("grade A");
    else if(marks>=60)
    printf("grade B");
    else if(marks>=40)
    printf("grade C");
    else
    printf("grade D");
    return 0;
}