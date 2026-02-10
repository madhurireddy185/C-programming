#include <stdio.h>
int main()
 {
    int marks, attendance;
    scanf("%d", &marks);
    scanf("%d", &attendance);
    if (attendance < 75)
     {
        printf("Fail");
    } 
    else
    {
        if (marks >= 75)
         {
            printf("Distinction");
        }
        else if (marks >= 50 && marks <= 74)
         {
            printf("Pass");
        }
        else 
        {
            printf("Fail");
        }
    }
    return 0;
}
