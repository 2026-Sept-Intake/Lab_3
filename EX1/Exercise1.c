#include <stdio.h>
int main (void)
{
    float height;
    float power;
    float n=0.9;
    float m=1000;
    float g =9.80;
    float work;
    float frw;
    
    printf("Enter the height of the dam(in meters): ");
    scanf("%f",&height);
    printf("Enter the flow rate of water(in cubic meters per second): ");
    scanf("%f",&frw);
    
    work=frw*m*g*height;
    power = n*work;
    printf("Amount of power will be produced: %fMW ",power/(1000000));
    
    //when u have to add powers of 10 , as an example u can add
    // 1.30 x 10^3 ----- 1.30e3
    return 0;
}
