#include <stdio.h>
int main()
 {
    int roomType;
    char season;
    scanf("%d", &roomType);
    scanf(" %c", &season);  
    switch(roomType) 
    {
        case 1:   
            if(season == 'A')
                printf("₹2500");
            else if(season == 'B')
                printf("₹2000");
            break;
        case 2:   
            if(season == 'C')
                printf("₹4000");
            else if(season == 'D')
                printf("₹3000");
            break;
        default:
            printf("Invalid Input");
    }
    return 0;
}
