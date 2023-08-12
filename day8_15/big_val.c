#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter 3 values : ");
	scanf("%d %d %d",&a,&b,&c);
	((a>b)&&(a>c))?printf("a is Big : %d",a):(b>c)?printf("b is Big : %d",b):printf("c is Big : %d",c);
}
