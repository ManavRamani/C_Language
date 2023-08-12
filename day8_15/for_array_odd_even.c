/*
	find odd even number and count and display count :
*/
#include<stdio.h>
void main()
{
	int rno[9],i,c_e=0,c_o=0;
	for(i=0;i<=8;i++)
	{
		printf("Enter Roll Number : %d : ",i);
		scanf("%d",&rno[i]);
	}
	for(i=0;i<=8;i++)
	{
		printf("Roll No : %d: %d \n",i,rno[i]);
	}
	for(i=0;i<=8;i++)
	{
		if(rno[i]%2==0)
		{
			c_e++;
		}
		else
		{
			c_o++;
		}
	}
	printf("\nEven Count : %d\n",c_e);
	printf("Odd Count : %d\n",c_o);
}
