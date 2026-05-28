#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Null 0
int main()
{
	char*buffer;
	/*Allocating memory*/
	if((buffer =(char *)malloc(10))==Null)
	{
		printf("malloc failed.\n");
		exit(1);
	}
	printf("Buffer of size %d created \n",_msize(buffer));
	strcpy(buffer,"HYDERABAD");
	printf("\nBuffer contains :%s \n",buffer);
	/*real allocation*/
	if((buffer = (char *)realloc(buffer,15))==Null)
	
	{
		printf("Real allocation failed.\n");
		exit(1);
		
	}
	printf("\nBuffer size modified.\n");
	printf("\nBuffer still contains:%s\n",buffer);
	strcpy(buffer,"SECUNDERABAD");
	printf("\nBuffer now contains:%s\n",buffer);
	/*freeing memory*/
	free(buffer);
}

