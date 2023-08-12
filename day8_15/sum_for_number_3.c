/*
	3. No Argument & With Return Value : sum of n number :
	value get  	-> fun
	logic		-> fun
	output		-> main
*/
#include<stdio.h>
int sum_n();
void main()
{
	int x;
	x=sum_n();
	printf("Sum is : %d",x);
}
int sum_n()
{
	int n,i,sum=0;
	printf("Enter Value of a : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	return sum;
}
