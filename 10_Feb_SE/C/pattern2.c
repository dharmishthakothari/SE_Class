#include<stdio.h>
int main()
{
	int number,row,col;
	printf("Enter number ");
	scanf("%d",&number);
	for(row=1;row<=number;row++)
	{
		for(col=number;col>=row;col--)
		{
			printf(" *");
		}
		printf("\n");
	}
}
