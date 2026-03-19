#include<stdio.h>
int main()
{
	int n,i,j,m;
	printf("Enter size of array ");
	scanf("%d",&n);
	int array1[n];
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter element ");
		scanf("%d",&array1[i]);
	}
		printf("\n\n\nEnter size of another array ");
		scanf("%d",&m);
	int array2[m];
	for(i=0;i<m;i++)
	{
		printf("\nEnter element ");
		scanf("%d",&array2[i]);
	}
	
	int array3[n+m];
	for(i=0,j=0;i<m+n;i++)
	{
		if(i<n)
			array3[i]=array1[i];
		else
		{
				array3[i]=array2[j];
				j++;
		}
	}
	//To print an array
		for(i=0;i<m+n;i++)
		{
			printf("\n%d",array3[i])	;
		}
	
	}
