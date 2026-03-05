#include<stdio.h>
int main()
{
	int number,i,a=0,j;
	for(j=1;j<=100;j++){
	
	for(i=2;i<j;i++)
	{
		if(j%i==0)
		{
			a=0;
			break;
		}
		else
		{
			a=1;
//			printf("\nNumber is Prime ");
//			break;
		}
	}
	if(a==1)
	{
		printf("\n %d Number is Prime ",j);
	}else
	{
		printf("\n %d Number is not prime ",j);

	}}
}
