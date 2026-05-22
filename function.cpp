#include<stdio.h>
int main()
{
	/* calculating area of a circle */
	/* Formula is pi*sqr(r)*/
	float pi = 3.14519;
	int r;
	float area;
	printf("What is the radius ? :");
	scanf("%d",&r);
	area = pi*r*r;
	printf("The Area of the circle with radius %d is %f",r,area);
	
	
	
	
	
}
