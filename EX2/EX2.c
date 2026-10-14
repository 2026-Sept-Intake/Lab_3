#include<stdio.h>
int main()
{
	double speed_kmh, speed_ms;
	double distance, acceleration, time;

	printf("Enter takeoff speed:");
	scanf("%lf", &speed_kmh);

	printf("Enter catapult distance:");
	scanf("%lf", &distance);

	speed_ms = speed_kmh*1000.0/3600.0;
	acceleration = (speed_ms*speed_ms)/(2.0*distance);
	time = speed_ms/acceleration;

	printf("\nAcceleration = %.2f m/s^2\n", acceleration);
	printf("Time taken = %.2f seconds\n", time);

	return 0;
}
