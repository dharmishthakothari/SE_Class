#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter no of row ");
	scanf("%d",&r);
	printf("Enter no of columns ");
	scanf("%d",&c);
	int matrix[r][c];
	int sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter elment ");
			scanf("%d",&matrix[i][j]);	
			if(i==j)
			{
			
				sum+=matrix[i][j];		
			}
		}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",matrix[i][j]);			
		}
		printf("\n");
		
	}
	
	printf("\n\n\nSum of diagonal element is %d",sum);
}
	
