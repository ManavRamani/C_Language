#include<stdio.h>
void main()
{
	float a,b,sum,avr;
	printf("Enter Value of a : ");
	scanf("%f",&a);
	printf("Enter Value of b : ");
	scanf("%f",&b);
	sum = a+b;
	printf("Sum is : %.2f\n",sum);
	avr=sum/2;
	printf("Averagr is : %.2f",avr);
	
}
