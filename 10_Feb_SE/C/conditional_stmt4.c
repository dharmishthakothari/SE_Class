#include<stdio.h>
int main()
{
	int number1;
	printf("Enter number");
	scanf("%d",&number1);
	
	if(number1%2==0)
	{
		printf("%d is even",number1);
	}
	else
	{
		printf("%d is odd",number1);
	}
}
