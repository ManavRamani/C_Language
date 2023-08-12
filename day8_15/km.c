#include<stdio.h>
void main()
{

	float km,m,cm,inch,feet;
	printf("Enter km : ");
	scanf("%f",&km);
	
	m=km*1000;
	printf("%.2f km = %.2f meter\n",km,m);
	
	feet=m*3.280839895;
	printf("%.2f meter = %.2f feet\n",m,feet);
	
	inch=feet*12;
	printf("%.2f feet = %.2f inch\n",feet,inch);
	
	cm=inch*2.54;
	printf("%.2f inch = %.2f cm\n",inch,cm);
}
