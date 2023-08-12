#include<stdio.h>
void main()
{
	int d,w,y,days,day=365,week=7;
	printf("Enter days : ");
	scanf("%d",&days);
	y=days/day;
	w=(days%day)/week;
	d=(days%day)%week;
	printf("year : %d = %d / %d \n\n",y,days,day);
	
	printf("week = (%d % %d)/ %d \n",days,day,week);
	printf("week : %d = %d / %d \n\n",w,days%day,week);	
	
	printf("day : %d = (%d % %d)% %d \n\n",d,days,day,week);
	
	printf("Year : %d , Week : %d , Day : %d",y,w,d);
}
