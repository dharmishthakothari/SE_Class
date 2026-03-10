//initlize array with 1-10 values and display

#include<stdio.h>
int main()
{
	int numbers[10],i,sum=0;
	for(i=0;i<10;i++)
	{
		printf("\nindex === %d\t",i);
		numbers[i]=1+i;
		printf("%d",numbers[i]);
		sum+=numbers[i];
	}
	printf("\n\nSUM===%d",sum);
	
	
}
