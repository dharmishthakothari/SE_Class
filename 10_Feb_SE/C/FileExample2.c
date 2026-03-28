#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE* file;
	file=fopen("count_digit.c","r");
	int i;
	char stmt[100];
	while(fgets(stmt,sizeof(stmt),file)!=NULL)
		{
		
		printf("%s",stmt);
	}
	
}
