#include<stdio.h>
int main()
{
	int i,sum=0,n;
	
	printf("Enter no of element you want ");
	scanf("%d",&n);
	int numbers[n];
		for(i=0;i<n;i++)
	{
		printf("\nEnter value for %d ",i);
		scanf("%d",&numbers[i]);
	}
	//display
	printf("-----------Array-----------");
	for(i=0;i<n;i++)
	{
		printf("\n%d",numbers[i]);
	}
	int max=numbers[0];
	for(i=1;i<n;i++)
	{
		if(max<numbers[i])
		{
			max=numbers[i];
		}
	}
	printf("\n\nMaximum number is %d ",max);
}
