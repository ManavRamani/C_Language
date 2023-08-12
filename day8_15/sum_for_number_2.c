/*
	2. With Argument & No Return Value : sum of n number :
	value get  	-> main
	logic		-> fun
	output		-> fun
*/
#include<stdio.h>
void sum_n(int);
void main()
{
	int n;
	printf("Enter Value of a : ");
	scanf("%d",&n);
	sum_n(n);
}
void sum_n(int x)
{
	int i,sum=0;
	for(i=1;i<=x;i++)
	{
		sum+=i;
	}
	printf("sum is : %d",sum);
}
