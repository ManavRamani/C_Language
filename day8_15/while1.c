/*
	1. Odd Or Even Number Print 1 to 10 : 
*/
#include<stdio.h>
void main()
{
	int i=1;
	while(i<=10)
	{
		if(i%2==0)
		{
			printf("%d is Even Number \n",i);
		}
		else
		{
			printf("%d is Odd Number \n",i);
		}
		i++;
	}
}
