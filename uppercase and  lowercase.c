#include <stdio.h>
int main() {
char ch;
printf("enter the character");
scanf("%c",&ch);
if(ch>='A' && ch<='Z')
printf("output:uppercase\n");
else if(ch>='a' && ch<='z')
printf("output:lowercase\n");
else
printf("output:not a character");
    
    return 0;
}