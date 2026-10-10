#include <stdio.h>

int main(void){
 
	float vkmh; //speed in kmh^-1
	float vms;  //speed in ms^-1
	float d;    //distance
	float t;    //time
	float a;    // acceleration

        printf("Enter the takeoff speed(km/h): ");// speed in km/h (h=hour)
        scanf("%f", &vkmh);
	printf("Enter the distance(m): ");     //distance in meters
        scanf("%f", &d);

        vms = vkmh / 3.6; //Converting speed from km/h to m/s
	t = (2.0 * d)/vms;     //Calculating time in seconds
	a = vms / t;           //Calculating acceleration 
	
	printf("Acceleration: %.2f m/s^2\n", a);
	printf("Time: %.2f seconds\n", t);

	return 0;



 


}
    
