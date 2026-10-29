#include <stdio.h>
#include <math.h>
int main (void)
{
    float area;
    float height;
    float base;
    
    printf("Enter the area of the sail(square meters): ");
    scanf("%f", &area);
    
    height = sqrt(area * 3.0);
    
    base = (2.0 / 3.0) * height;
    
    printf("Base length of the sail is: %.2f\n", base);
    printf("Height of the sail is: %.2f\n", height);
    return 0;
}

