#include<stdio.h>
int main()
{
	int number,i;
	printf("Enter number ");
	scanf("%d",&number);
	int sum=0;
	int a=0,b=1;
	for(i=0;i<number;i++)
	{
		printf("\t%d",a);
		sum=a+b;
		a=b;
		b=sum;
	}
}
