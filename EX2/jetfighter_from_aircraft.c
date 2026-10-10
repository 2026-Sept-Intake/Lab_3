#include<stdio.h>
int main(void)
{
	float speed, distance;
	float velocity, acceleration, time;
	printf("enter the takeoff speed"); // speed in km/hr
        scanf("%f", &speed);
	printf("enter the distance"); //distance in meters
	scanf("%f", &distance);
        velocity=speed * 5.0/18.0;// convert km/hr to m/s
        time=2*distance/velocity;//calculate time from v=at and s=(1/2)at^2
	acceleration=velocity/time;//calculate the acceleration from v=at
	printf("%2f acceleration will be displayed in m/s^2\n",acceleration);
	printf("%2f time will be displayed in second\n" ,time);
	return 0;
}
