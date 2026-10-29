#include <stdio.h>
int main (void)
{
    float speed ;
    float distance ;
    float time;
    float acceleration;
    float Nspeed;
    
    printf("Input the takeoff speed(km/hr): ");
    scanf("%f",&speed);
    printf("Enter the distance(meters): ");
    scanf("%f",&distance);
    
    Nspeed = speed*1000/3600;
    acceleration = (Nspeed * Nspeed) / (2.0 * distance);
    time = Nspeed/acceleration;
    
    
    
    printf("Acceleration of the jet fighter is(m/s^2): %f \n ",acceleration);
    printf("Time for the fighter to be accelerated to takeoff speed(seconds): %f",time);
    
    return 0;
}

