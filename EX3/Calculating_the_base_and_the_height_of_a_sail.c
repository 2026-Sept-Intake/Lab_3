#include <stdio.h>
#include <math.h>

int main(void)

{
    float area, base, height;

    printf("Enter the area of the sail: ");
    scanf("%f", &area);

    height = sqrt(3 * area);
    base = (2.0 / 3.0) * height;

    printf("Height of the sail = %.2f Meter\n", height);
    printf("Base of the sail = %.2f Meter\n", base);

    return 0;

}
