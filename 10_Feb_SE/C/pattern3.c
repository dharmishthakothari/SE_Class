#include<stdio.h>
int main()
{
	int number,row,col,k=1;
	printf("Enter number ");
	scanf("%d",&number);
	for(row=1;row<=number;row++)
	{
		for(col=number;col>=row;col--)
		{
			printf("%d ",k);
			k+=2;
		}
		printf("\n");
	}
}
