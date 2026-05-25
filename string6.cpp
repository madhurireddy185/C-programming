#include<stdio.h>
#include<string.h>
int main()
{
	int c,d;
	char string[]="Madhuri Reddy";
	printf("\n\n");
	printf("==================\n");
	for(c=0;c<=20;c++)
	{
		d= c+1;
		printf("|%-12.*s|\n",d, string);
		
	}
	printf("|===================|\n");
	for(c=20;c>=0;c--)
	{
		d=c+1;
		printf("|-12.*s\n",d,string);
	}
	printf("===================\n");
	
}
