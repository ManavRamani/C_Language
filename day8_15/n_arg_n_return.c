/*
	1. No Argument & No Return Value : big Val :
	value get  	-> fun
	logic		-> fun
	output		-> fun
*/
#include<stdio.h>
void big();
void main()
{
	big();
}
void big()
{
	int a,b;
	printf("Enter Value of a : ");
	scanf("%d",&a);
	printf("Enter Value of b : ");
	scanf("%d",&b);
	if(a>b)
	{
		printf("A is Big : %d",a);
	}
	else
	{
		printf("B is Big : %d",b);
	}
}
