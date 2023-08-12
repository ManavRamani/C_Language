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
			printf(" * ");
			j++;
		}
		i++;
		printf("\n");
	}
}

