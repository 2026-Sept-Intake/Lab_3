#include <stdio.h>
int main (void){
	
	float Power, work, flowrate, efficiency, mass, gconstant, height;

	printf("Enter Height of the dam");
	scanf("%f" , &height);

	printf("Enter Flow rate of water");
	scanf("%f" , &flowrate);

	efficiency = 0.9;
	gconstant = 9.80;
	mass = flowrate * 1000;
	work = mass * gconstant * height;
	Power = (efficiency * work) / 1000000;

	printf("Power = %f MW\n", Power);
}


