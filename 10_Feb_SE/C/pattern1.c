#include<stdio.h>
int main()
{
	int number,i,r,c;
	printf("Enter number ");
	scanf("%d",&number);
	for (r=0;r<number;r++)
	{
		for(c=0;c<=r;c++)
			{
			
			printf("*");
		}
		printf("\n");
	}
	}
