#include<stdio.h>
int main (void)
{
	float speed_kmh,s; //speed_kmh=take off speed in km/h, s=distance traveled
        float speed_ms,a,t; //speed_ms=take off speed in m/s, a=acceleration , t=time in seconds
        printf("Enter the take off speed(in km/hr)\n");
	scanf("%f",&speed_kmh);
	printf("Enter the distance travelled(in m)\n");
	scanf("%f",&s);
	speed_ms=speed_kmh/3.6; //converting take off speed from km/h to m/s
	t=(2*s)/speed_ms; //s=(1/2)at^2 but at=speed_ms
	a=speed_ms/t;//speed_ms=at
	printf("Acceleration of the figther jet is %.2f m/s^2 and time needed is %.2f seconds\n",a,t);
	return 0;
}
