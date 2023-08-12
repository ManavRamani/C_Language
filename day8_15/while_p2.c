/*
 1
 2  2
 3  3  3
 4  4  4  4
 5  5  5  5  5
 6  6  6  6  6  6
*/
#include<stdio.h>
void main()
{
	int i=1,size;
	printf("Enter Size of Pattern : ");
	scanf("%d",&size);
	while(i<=size)
	{
		int j=1;
		while(j<=i)
		{
			printf(" %d ",i);
			j++;
		}
		i++;
		printf("\n");
	}
}

