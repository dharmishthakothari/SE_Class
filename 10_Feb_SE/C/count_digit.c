#include<stdio.h>
int main()
{
	int number,i,count,sum=0;
	printf("Enter number ");
	scanf("%d",&number);
	int rem;
	while(number!=0)
	{
		rem=number%10;
		sum+=rem;
		count++;
		number=number/10;
		//printf("\nrem=%d   number=%d",rem,number);
	}
	
	printf("No of Digit %d",count);
	printf("\nSum of Digit %d",sum);
}
