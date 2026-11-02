#include <stdio.h>

int main(void)
{
	float Velocity,Acceleration,Distance,Time;

	printf("Enter Take off speed (km/h):");
	scanf("%f", &Velocity);

	printf("Enter the Distance travelled (m):");
	scanf("%f", &Distance);

	Time=(2*Distance)/(Velocity*5/18);

	printf("Time = %f s\n", Time);

	Acceleration=(Velocity*5/18)/Time;

	printf("Acceleration = %f m/s^2\n", Acceleration);

	return 0;
}
