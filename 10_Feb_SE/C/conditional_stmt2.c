#include<stdio.h>
int main()
{
	int number;
	printf("Enter number ");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("\nNumber is positive");
	}
	else if(number<0)
	{
		printf("\nNumber is Nagative ");
	}
	else 
	{
		printf("\nZero");
	}
}
