#include <stdio.h>
#define g 9.80


int main(void){
  double height = 0;
  double waterFlow = 0;
  double work = 0;
  double power = 0;


  printf("Enter the height of the dam in meters: ");
  scanf("%lf",&height);

  printf("Enter the number of cubic meters of water: ");
  scanf("%lf",&waterFlow);

  work = waterFlow*1000*g*height;
  power = (0.9*work)/1000000;

  printf("The power is %.2lf MW \n",power);


 return 0;
}
