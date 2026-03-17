#include<stdio.h>

void greetings()
{
	printf("Good Morning ");
}
void goodbye()
{
	printf("\nGood Bye");
}
void addition(int no1,int no2)
{
	printf("\nSum==%d",no1+no2);
}


int main()
{
	greetings();
	goodbye();
	addition(12,23);
	addition(2300,6700);
	int i,j;
	printf("Enter 2 numbers ");
	scanf("%d%d",&i,&j);
	addition(i,j);
	
}
