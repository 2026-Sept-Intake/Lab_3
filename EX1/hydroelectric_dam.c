#include<stdio.h>
int main (void)
{
	int h,q; //h=height of the dam, q=volumetric flowrate
        int d=1000; //density of water in kg/m^3
        float p,w; //p=power, w=work
        float g=9.8,n=0.9; //g=gravitational constant, n=efficiency constant
        printf("Enter the height of the dam(in m)\n");
        scanf("%d",&h);
        printf("Enter the volumetric flowrate(in m^3/s)\n");
	scanf("%d",&q);
	w=q*d*g*h; //m=q*d
	p=(n*w)/(1e6); //converting Watts into Mega Watts
	printf("%.2fMW of power will be produced\n",p);
        return 0;
}
