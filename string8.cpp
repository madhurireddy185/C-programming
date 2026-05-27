#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="Rajnikanth";
	int n;
	n=strlen(name);
	char cinema[] = "Superstar -";
	printf("%s has %d Letters",name,n);
	printf("%s",strcat(name,cinema));
	
	
	
	
}
