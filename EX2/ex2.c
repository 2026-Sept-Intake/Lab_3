#include<stdio.h>

int main(void)
{
	float v, v1, s, t, a;

	printf("Jet's takeoff speed (km/hr): ");
	scanf("%f", &v);

	printf("Distance jet from rest to takeoff (meters): ");
	scanf("%f", &s);
	
	v1 = v * (5/18.0);//v1=velocity in m/s
	t = (2*s)/v1;
	a = v1/t;

	printf("Acceleration of the jet : %.2f m/s^2\n",a);
	printf("Time for the takeoff : %.2f s\n",t);
}
