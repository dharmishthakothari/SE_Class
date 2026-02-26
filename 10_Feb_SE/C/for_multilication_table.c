#include<stdio.h>
int main()
{
	int number1,i;
	printf("Enter number");
	scanf("%d",&number1);
	if(number1%2==0)
	{
	
		for(i=1;i<=10;i++)
		{
//		ans=number1*i;
//		printf("\n%d * %d = %d",number1,i,ans);
			printf("\n%d * %d = %d",number1,i,i*number1);
		}
	}else
	{
		printf("Can't print multiplication table as number is odd");
	}
}
