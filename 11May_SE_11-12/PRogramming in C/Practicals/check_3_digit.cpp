#include<stdio.h>
int main()
{
	int num;
	printf("Enter number ");
	scanf("%d",&num);
	if(num>=100 && num<=999)
	{
		printf("Number is 3 digit");
	}else 
		{
			printf("Not 3 digit number ");
		}
	}
