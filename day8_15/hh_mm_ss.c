#include<stdio.h>
void main()
{
	int ss,mm,hh,s;
	printf("Enter Seconds : ");
	scanf("%d",&s);
	ss=s%60;
	mm=s/60;
	hh=mm/60;
	printf("hh : mm : ss = %d : %d : %d \n",hh,mm,ss);
//	printf("second : %d\n",ss);
//	printf("Min : %d\n",mm);
//	printf("h : %d",hh);
	
}
