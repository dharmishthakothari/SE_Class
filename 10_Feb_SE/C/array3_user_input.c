//initlize array with 10 size and user enters element

#include<stdio.h>
int main()
{
	int numbers[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("\nEnter value for %d ",i);
		scanf("%d",&numbers[i]);
		sum+=numbers[i]	;
	}
	//display
	printf("-----------Array-----------");
	for(i=0;i<10;i++)
	{
		printf("\n%d",numbers[i]);
	}
	printf("\n\nSUM==%d",sum);
	
}
