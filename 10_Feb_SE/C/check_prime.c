#include<stdio.h>
int main()
{
	int number,i,a=0;
	printf("Enter number ");
	scanf("%d",&number);
	for(i=2;i<number;i++)
	{
		if(number%i==0)
		{
			a=0;
			break;
		}
		else
		{
			a=1;
//			printf("\nNumber is Prime ");
//			break;
		}
	}
	if(a==1)
	{
		printf("\nNumber is Prime ");
	}else
	{
		printf("\nNumber is not prime");

	}
}
