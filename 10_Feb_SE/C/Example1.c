/*
		Program name : Example1
		Purpose : to demonstract printf and scanf
		date : 17th Feb
		
*/
#include<stdio.h>
int main()
{
	int roll_no,c_no;
	char name[20];
	float per;

//	printf("Enter roll no ");
//	scanf("%d",&roll_no);
//	printf("\nEnter name ");
//	scanf("%s",name);
//	printf("\nEnter percentage ");
//	scanf("%f",&per);
//	printf("\nEnter contact number ");
//	scanf("%d",&c_no);
	
	printf("Enter name , roll no,pertange ,contact number ");
	scanf("%s %d %f %d",name,&roll_no,&per,&c_no);	
	
	
	
	printf("\n\n\n%s\t%d\t%0.2f\t%d",name,roll_no,per,c_no);
	
	
}
