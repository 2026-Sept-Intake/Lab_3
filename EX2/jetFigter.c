#include <stdio.h>

int main (void){
  double speedKmh = 0;
  double distance = 0;
  double v = 0;
  

  printf("Enter the takeoff speed in km/h: ");
  scanf("%lf", &speedKmh);

  printf("Enter the takeoff distance in meters: ");
  scanf("%lf" , &distance);	

  v = speedKmh * 1000/3600;

  double time = 2*distance/v;
  double accelaration = v/time;

 printf("Accelaration: %.2f m/s^2 \n" , accelaration);
 printf("Time to takeoff: %.2f s \n" , time);

return 0; 


}
