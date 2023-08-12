/*
	for ,user array size ,array using add number and check nagetive or positive count dispaly : 
*/
#include<stdio.h>
void main()
{
	int i,c_p=0,c_n=0,n;
	printf("Size of Array : ");
	scanf("%d",&n);	

	int rno[n];
	for(i=0;i<=n;i++)
	{
		printf("Enter Roll Number : %d : ",i);
		scanf("%d",&rno[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("Roll No : %d: %d \n",i,rno[i]);
	}
	for(i=0;i<=n;i++)
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
