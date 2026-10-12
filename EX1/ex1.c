#include <stdio.h>
int main (void)
{
    double height, flowrate;
    double mass, work, power, powerMW;

   
    const double g = 9.80;  // constant definitions
    const double efficency = 0.90;

    printf("Enter the height of the dam: ");
    scanf("%lf",&height);

    printf("Enter the water flow rate: ");
    scanf("%lf", &flowrate);

    mass = flowrate * 1000;   // 1000 = density of water
    work = mass * g * height;
    power = efficency * work;
    powerMW = power/1000000;

    printf("Power produced: %.2fMW\n", powerMW);

    return(0);

} 


 
