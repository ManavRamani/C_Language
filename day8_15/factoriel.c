/*
	1. No Argument & No Return Value : factoriel :
	value get  	-> fun
	logic		-> fun
	output		-> fun
*/
#include<stdio.h>
void fact();
void main()
{
	fact();
}
void fact()
{
	int n,i,mul=1;
	
	printf("Enter Value of a : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		mul=mul*i;
	}
	printf("Factoriel of : %d : is : %d",n,mul);
}
