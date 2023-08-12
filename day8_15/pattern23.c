#include<stdio.h>
void pattern(int);
void main()
{
	int size;
	printf("Enter Size of Pattern : ");
	scanf("%d",&size);
	pattern(size);
}
void pattern(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
