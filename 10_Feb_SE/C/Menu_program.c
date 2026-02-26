#include<stdio.h>
int main()
{
	int choice,number1,number2;
	printf("\n1. Addition\n2. Subtraction\n3. Multiliaction\n4. Division\n5. exit");
	printf("\n Enter your choice  ");	
	scanf("%d",&choice);
	printf("Enter 2 numbers ");
	scanf("%d%d",&number1,&number2);
	if(choice==1)
	{
		printf("Addition %d",number1+number2);
	}else if(choice==2)
	{
		printf("Substraction %d ",number1-number2);
	}else if(choice==3)
	{
		printf("Mulilication %d",number1*number2);
	}else if(choice==4)
	{
		printf("Division %d",number1/number2);
	}else if(choice==5)
	{
		printf("Exit");
	}else
	{
		printf("Invalid input ");
	}
}
