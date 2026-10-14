#include<stdio.h>
int main()
{
	double height, flowrate;
	double mass, work, power;
	double gravity = 9.80;
	double efficiency = 0.90;
	double waterdensity = 1000.0;

	printf("Enter the height of the dam:");
	scanf("%lf", &height);

	printf("Enter the flowrate:");
	scanf("%lf", &flowrate);

	mass = waterdensity;
	work = mass*gravity*height;
	power = efficiency*work;
	power = power/1000000.0;

	printf("\nElectrical power produced = %.2f MW\n", power);

	return 0;
}
