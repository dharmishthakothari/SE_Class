#include<stdio.h>
int main()
{
	int number,row,col,k=1,col1;
	printf("Enter number ");
	scanf("%d",&number);
	int no_of_row=number*2-1;
	for(row=1;row<=no_of_row;row++)
	{
		if(row<=number)
		{
		
		//decrement
			for(col=number;col>=row;col--)
			{
				printf("* ");
			}
			printf("\n");
		}else
		{
		
		//increment
		for(col1=1;col1<=(row-number)+1;col1++)
		{
			printf("* ");
		}
		printf("\n");
	}
	}
	
}
