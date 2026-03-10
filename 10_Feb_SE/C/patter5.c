#include<stdio.h>
int main()
{
	int number,row,col,k=1,col1;
	printf("Enter number ");
	scanf("%d",&number);
	for(row=1;row<=number;row++)
	{
		for(col=1;col<=number;col++)
		{
			if(row==1 || row==number)
			{
				printf("*");
			}
			else if(col==1 || col==number)
			{
				printf("*");
			}else
			printf(" ");
		}
		printf("\n");
	}
}
