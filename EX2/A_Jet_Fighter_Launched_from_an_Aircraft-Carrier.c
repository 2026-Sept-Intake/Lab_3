#include <stdio.h>

int main (void)
{
	float speed, distance, v, a, t;

	printf("Enter The Takeoff Speed (km/hr) :");
	scanf("%f",&speed);

	printf("Enter The Distance (m) :");
	scanf("%f",&distance);

	v = speed/3.6; 
	a = (v*v)/(2*distance);
	t = v/a;

	printf("Acceleration = %.2f m/s^2\n",a);
	printf("Time = %.2f Seconds\n",t);

	return 0;

}

