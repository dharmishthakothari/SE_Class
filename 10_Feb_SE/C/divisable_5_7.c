#include<stdio.h>
int main()
{
	int number;
	printf("Enter number ");
	scanf("%d",&number);
	if(number%5==0 && number%7==0)
	{
		printf("%d is divisable by 5 and 7",number);
	}else if(number%5==0 || number%7==0)
	{
		if(number%5==0)
		
			printf("%d is divisable by 5 ",number);
		else
			printf("%d is divisable by 7 ",number);
	}
	
	
}
