#include<stdio.h>
int main()
{
	char name[20]="Dharmishtha Kothari";
	int i=0,count=0;
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]=='A' || name[i]=='a')
		{
			count++;
		}
	printf("\n%c",name[i]);	
	}
	printf("\n\nCount of letter a is %d",count);
	
}
