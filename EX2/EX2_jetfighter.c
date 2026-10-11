#include <stdio.h>
int main(void)
{
	float distance, speedKmh, speedMs;
	float acceleration, timetaken;
	printf(" enter the takeoff speed (Km/hr)\n");
	scanf("%f", &speedKmh);
	printf("enter the catapault distance (meters)\n");
	scanf("%f", &distance);
	//convert km/hr to m/s
	speedMs = speedKmh* 1000.0 / 3600.0;
	//calculate acceleration: s=1/2*a*t^2
	acceleration=(speedMs * speedMs)/ (2.0 * distance);
	// calculate time:v=at
	timetaken= speedMs/acceleration;
	printf("acceleration: %.2f m/s^2\n", acceleration);
	printf("Time taken: %.2f seconds\n", timetaken);
	return 0;
}











