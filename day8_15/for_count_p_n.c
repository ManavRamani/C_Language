/*
	for ,array using add number and check nagetive or positive count dispaly : 
*/
#include<stdio.h>
void main()
{
	int rno[9],i,c_p=0,c_n=0;
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
		if(rno[i]>0)
		{
			c_p++;
		}
		else
		{
			c_n++;
		}
	}
	printf("Positive Count : %d\n",c_p);
	printf("Nagetive Count : %d\n",c_n);
}
