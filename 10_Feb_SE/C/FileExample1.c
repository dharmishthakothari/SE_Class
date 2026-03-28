#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE* file;
	file=fopen("file1.txt","a");
	int i;
	char stmt[20];
	do
	{
	
		printf("Enter String ");
		
		gets(stmt);
//		if(strcmp(stmt,"END"))
//			break;
		fprintf(file,stmt);
	}while(strcmp(stmt,"END")!=0);
	printf("Data Written Successfully ");
}

