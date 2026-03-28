#include<stdio.h>
#include<string.h>
int main()
{
	char name[50]="This is first Program.Nayan";
	int i=0,count=0;
//	for(i=0;name[i]!='\0';i++)
//	{
//			count++;
//	}
//	printf("\n\nTotal no of letters are  %d",count);
//	
		count=strlen(name);
		printf("\n\nTotal no of letters are  %d",count);
		for(i=count;i>=0;i--)
		{
			printf("\n%c",name[i]);
		}
		char dest[20];
		strcpy(dest,name);
		printf("\n\nCoping string %s ",dest);

}
