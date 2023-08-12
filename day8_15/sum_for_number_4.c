/*
	4. With Argument & With Return Value : sum of n number :
	value get  	-> main
	logic		-> fun
	output		-> main
*/
#include<stdio.h>
int sum_n(int);
void main()
{
	int x,n;
	printf("Enter Value of a : ");
	scanf("%d",&n);	
	x=sum_n(n);
	printf("Sum is : %d",x);
}
int sum_n(int x)
{
	int i,sum=0;

	for(i=1;i<=x;i++)
	{
		sum+=i;
	}
	return sum;
}
