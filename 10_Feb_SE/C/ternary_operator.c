#include<stdio.h>
int main()
{
	int number1,number2;
	printf("Enter number ");
	scanf("%d",&number1);
	printf("Enter number ");
	scanf("%d",&number2);
	int ans;
	// condition?true:false
	ans=(number1>number2)?number1:number2;
	
	printf("Greater number is %d",ans);
}
