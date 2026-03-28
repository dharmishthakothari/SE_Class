#include<stdio.h>
#include<string.h>
int main()
{
	char fName[20];
	char lname[10];
	printf("Enter name ");
	 gets(fName);
	 printf("Enter surname ");
	 gets(lname);
	 
	 strcat(fName,lname);
	 printf("\n\n%s No of characters are %d ",fName,strlen(fName));
	 
	 strrev(fName);
	 printf("\n\n Reverse string is %s ",fName);
	
	
}
	
