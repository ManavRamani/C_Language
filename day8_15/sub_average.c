#include<stdio.h>
void main()
{
	int sub1,sub2,sub3,sub4,sub5,sum;
	float avr;
	
	printf("Enter Sub1 : ");
	scanf("%d",&sub1);
	printf("Enter Sub2 : ");
	scanf("%d",&sub2);
	printf("Enter Sub3 : ");
	scanf("%d",&sub3);
	printf("Enter Sub4 : ");
	scanf("%d",&sub4);
	printf("Enter Sub5 : ");
	scanf("%d",&sub5);
	
	sum=sub1+sub2+sub3+sub4+sub5;
	avr = sum/5;
	
	printf("sum is : %d\n",sum);
	printf("average is : %f\n",avr);
}
