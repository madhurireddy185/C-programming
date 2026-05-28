#include<stdio.h>
int main()
{
	FILE *fp;
	int  number,quantity,i;
	float price,value;
	char item[10],filename[10];
	printf("input file name\n");
	scanf("%s",filename);
	fp = fopen(filename,"w");
	printf("Input inventory data\n\n");
	printf("Item name Number price Quantity\n");
	for(i=1;i<=3;i++)
	{
		fscanf(stdin,"%s %d %f %d",item,&number,&price,&quantity);
		fprintf(fp,"%S %d %.2f %d",item,number,price,quantity);
	}
	fclose(fp);
	fprintf(stdout,"\n\n");
	fp=fopen(filename,"r");
	printf("Item name number price Quantity value\n");
	for(i=1;i<=3;i++)
	{
		fscanf(fp,"%s %d %f d",item,&number,&price,&quantity);
		value = price*quantity;
		fprintf(stdout,"%-8s %7d %8d %11.2f\n",item,number,price,quantity,value);
		
	}
	fclose(fp);
	
}
