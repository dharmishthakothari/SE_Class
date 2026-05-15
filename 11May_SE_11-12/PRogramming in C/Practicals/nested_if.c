#include<stdio.h>
int main()
{
	int age,weight;
	printf("Enter age ");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Enter weight ");
		scanf("%d",&weight);
		if(weight>=55)
		{
			printf("User is eligible to donate blood");
		}else
		{
			printf("Due to underweight user can't donate blood");
			
		}
	}
	else
	{
		printf("Due to under age user can not donate blood ");
	}
}
