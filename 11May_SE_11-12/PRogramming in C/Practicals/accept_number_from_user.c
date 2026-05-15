#include<stdio.h>
int main()
{
	int num1,num2,ans;
	printf("Enter number 1 ");
	scanf("%d",&num1);
	
	printf("Enter number 2 ");
	scanf("%d",&num2);
	
	printf("Number 1 = %d",num1);
	printf("\nNumber 2 = %d",num2);
	
	//Arithmatic operators 
	printf("\n\n\n Arithmatic Operators \n\n\n ");
	printf("\nAddition = %d",num1+num2);
	printf("\nSubtraction = %d",num1-num2);
	printf("\nMultiplication = %d",num1*num2);
	printf("\nDivision = %d",num1/num2);
	printf("\nModulus = %d",num1%num2);
	
	// Relational Operators 
	printf("\n\n\n Relational Operators \n\n\n ");
	
	
	printf("\n%d>%d=%d",num1,num2,num1>num2);
	
	printf("\nnum1>=num2 %d",num1>=num2);
	printf("\nnum1<num2 %d",num1<num2);
	printf("\nnum1<=num2 %d",num1<=num2);
	printf("\nnum1==num2 %d",num1==num2);
	printf("\nnum1!=num2 %d",num1!=num2);
	
}
