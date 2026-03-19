#include<stdio.h>
int main()
{
	int i=0;
	do
	{
		i++;
		if(i==3)
			goto bye;
		printf("\n%d",i);
	
		
	}while(i<=10);
	
	printf("\n\nWith FOR LOOP");
	for(i=1;i<10;i++)
		printf("\n%d",i);
	
	bye:
		printf("This is end of program");
	
	printf("\n\n\n*************************");

}
