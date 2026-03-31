#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE* file;
	file=fopen("count_digit.c","r");
	int i;
	char stmt[100];
	int position=ftell(file);
	printf("%d",position);
	fgets(stmt,sizeof(stmt),file);				
	printf("\n\n%s",stmt);
		
	position=ftell(file);
	printf("\n\nAfter reading %d",position);	
	
	fgets(stmt,sizeof(stmt),file);				
	printf("\n\n%s",stmt);
	
	position=ftell(file);
	printf("\n\nAfter reading %d",position);
	
		
	
}
