#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter value of a : ");
    scanf("%d",&a);
    printf("Enter value of b : ");
    scanf("%d",&b);
    printf("Enter value of c : ");
    scanf("%d",&c);
    ((a==b)&&(b==c))?printf("a, b and c are equal.."):(a==b)?printf("a and b are equal.."):(a==c)?printf("a and c are equal.."):(b==c)?printf("b and c are equal.."):printf("a, b and c are not equal..");
}
