#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct book
{
	char title[50];
	char author[10];
	int price;
};
int main()
{
	struct book b1[5];
	strcpy(b1[0].author,"Nayan");
	strcpy(b1[0].title,"Motivation");
	b1[0].price=230;
	
	strcpy(b1[1].author,"Parth");
	strcpy(b1[1].title,"Programming in C");
	b1[1].price=300;
	
		strcpy(b1[2].author,"Riya");
	strcpy(b1[2].title,"OOPS");
	b1[2].price=180;
	
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("\n%s\t%s\t%d",b1[i].author,b1[i].title,b1[i].price);
	}
	
	
	
}
