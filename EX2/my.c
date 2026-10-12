#include <stdio.h>

int main(void){

	float velocity, acceleration, distance, time;

	printf("Enter the speed");
	scanf("%f" , &velocity);

	printf("Enter the distance");
	scanf("%f" , &distance);

	time = (2*distance)/(velocity*5.0/18.0);

	printf("time = %f" , time);

	acceleration = (velocity*5.0/18.0)/time;

	printf("acceleration = %f" , acceleration);

	return 0;
}
