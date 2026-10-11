#include <stdio.h>
int main(void)
{
	int h,q; //h=height of the dam, q=flowrate
	int d=1000; //d=density of water in kg/m^3
	int m; //m=mass
	float p,w; //p=power, w=work
	float g=9.8,n=0.9; //g=gravitaional constant, n=efficiency of the conversion
	printf("Enter the height of the dam and the flowrate\n");
	scanf("%d %d",&h,&q);
	m=q*d;
	w=m*g*h;
	p=(n*w)/1000000.0;
	printf("%.2fMW of power will be generated \n",p);
	return 0;
}
