#include <stdio.h>
int main (void)

{
   double speed, distance, acceleration, time;

   printf("Enter takeoff speed (km/hr): ");
   scanf("%lf", &speed);

   printf("Enter the distance (meters): ");
   scanf("%lf", &distance);

   speed = speed * 5/18;  // Multiply the speed by 5/18 inorder to convert from km/h to m/s
   acceleration = (speed*speed) / (2 * distance);
   time = speed / acceleration;

   printf("Acceleration = %.2f m/s^2\n", acceleration);
   printf("Time = %.2f seconds\n", time);

   return(0);

}   

	
