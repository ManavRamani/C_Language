#include<stdio.h>
void main()
{
    int p,r,y;
    float SI;
    printf("Enter price : ");
    scanf("%d",&p);
    printf("Enter Rate : ");
    scanf("%d",&r);
    printf("Enter year : ");
    scanf("%d",&y);
    SI=(p*r*y)/100;
    printf("Simple Interest : %.2f",SI);

}