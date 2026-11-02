#include <stdio.h>

int main(void)
{
	float Power,work,flowrate,efficiency,mass,gconstant,height;

	printf("Enter Height:");
	scanf("%f", &height);

	printf("Enter Flow rate of water:");
	scanf("%f", &flowrate);

	efficiency=0.9;
	gconstant=9.8;

	Power=(efficiency*(flowrate*1000*gconstant*height))/1000000;

	printf("Power = %f MW\n", Power);

}
