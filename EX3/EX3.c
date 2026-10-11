#include <stdio.h>
#include <math.h>

int main() {
    double area, base, height;

    printf("Enter the area of the sail in m^2: ");
    scanf("%lf", &area);

    height = sqrt(3.0 * area);
    base = (2.0 / 3.0) * height;

    printf("Base of the sail: %.2f meters\n", base);
    printf("Height of the sail: %.2f meters\n", height);

    return 0;
}