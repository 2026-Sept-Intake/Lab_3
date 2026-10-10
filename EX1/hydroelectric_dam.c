#include<stdio.h>
int main(void)
{
	float h,f; //h=height of the dam, f= flowrate of water
	int d = 1000.0;//d=density of water in kgm^-3,d=m/v
        float p,w; //p=power,w=work 
        float g = 9.80, n = 0.9; //g=gravitational constant, n=efficiency constant
	printf("enter the height of the dam \n");
	scanf("%f",&h);
	printf("enter the flowrate of water\n");
	scanf("%f",&f);
       	w=d*g*h*f;
	p=(n*w)/(1000000.0);
	printf("%.2fMW of power will be produced\n" ,p);
	return 0;
}
