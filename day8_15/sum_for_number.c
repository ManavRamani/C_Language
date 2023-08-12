/*
	1. No Argument & No Return Value : sum of n number :
	value get  	-> fun
	logic		-> fun
	output		-> fun
*/
#include<stdio.h>
void sum_n();
void main()
{
	sum_n();
}
void sum_n()
{
	int n,i,sum=0;
	printf("Enter Value of a : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum is : %d",sum);
}
