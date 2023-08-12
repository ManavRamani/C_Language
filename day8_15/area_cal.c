#include<stdio.h>
#define PI 3.14
void main()
{
	int r;
	float area;
	printf("Enter r : ");
	scanf("%d",&r);
	area = PI * r * r;
	printf("Area is : %.2f",area);
}
